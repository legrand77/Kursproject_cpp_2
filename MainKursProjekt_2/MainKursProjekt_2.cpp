#include <iostream>
#include "ground.h"
#include "terrainBoots.h"
#include "transport.h"
#include "air.h"
#include "magicCarpet.h"
#include "centaur.h"
#include "camelFast.h"
#include "camel.h"
#include "broomstick.h"
#include "eagle.h"
#include "printRacer.h"
#include "transportList.h"
int main()
{   int action{};   
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    do
    {
    action = 0;
    int type{}; //тип гонки
    int typeTransport{}; //тип транспорта или завершение регистрации
    int pathLength{}; // длина дистанции
    int valueRegistration{};
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
    std::cout << "1. Гонка для наземного транспорта" << std::endl;
    std::cout << "2. Гонка для воздушного транспорта" << std::endl;
    std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
    std::cout << "Выберите тип гонки: ";
    std::cin >> type;
    std::cout << "Укажите длину дистанции (должна быть положительна): ";
    std::cin >> pathLength;
   transport* registrationList[7]{}; // создание экземпляров класса транспорт
    registrationList[0] = new terrainBoots(pathLength);
    registrationList[1] = new broomstick(pathLength);
    registrationList[2] = new camel(pathLength);
    registrationList[3] = new centaur(pathLength);
    registrationList[4] = new eagle(pathLength);
    registrationList[5] = new camelFast(pathLength);
    registrationList[6] = new magicCarpet(pathLength);
    do
    { 
    do
    {
    do 
    {
        if (typeTransport == 0)
        {
            std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
            std::cout << "1. Зарегистрировать транспорт \nВыберите действие ";
            std::cin >> action;
        }
    if (action == 1)
    {
        printRacer(type, pathLength);// печать пареметров гонки (тип, длина)
        transportList();
        
        std::cin >> typeTransport;
        if (typeTransport != 0)// заполнение листа регистрации 
        {
            int counter{};
            for (int i = 0; i < 7; i++)
            {
                if ((registrationList[i]->getType() == static_cast<TransportType>(type)) || (type == 3))
                {
                    if ((typeTransport - 1) == i)
                    {

                        if (registrationList[i]->getStatus() == 0)
                        {
                            registrationList[i]->setStatus(1);
                            std::cout << registrationList[i]->getName() << " успешно зарегистрирован!" << std::endl;
                            counter++;
                            break;
                        }
                        else  std::cout << registrationList[i]->getName() << " уже зарегистрирован!" << std::endl;
                        counter++;
                        break;
                    }
                }                             
            }
            if (counter == 0 )std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
       
            int counter_1{};
            for (int i = 0; i < 7; i++)// счетчик зарегистрированных ТС
            {   
                {  
                    counter_1 = counter_1 + registrationList[i]->getStatus();
                }   
            }
          valueRegistration = counter_1;
            if (valueRegistration != 0 && counter != 0)// печать зарегистрированных ТС
            {
                std::cout << "Зарегистрированные транспортные средства: ";
                int counter{};
                for (int i = 0; i < 7; i++)
                {
                    
                    if (registrationList[i]->getStatus())
                    {
                        counter++;
                        if (counter > 1) std::cout << ", ";
                        std::cout << registrationList[i]->getName();
                        
                    }                        
                } 
                std::cout << std::endl; 
          }
        }
    }

    }  while (valueRegistration < 2);
    }  while (typeTransport != 0);

    std::cout << "1. Зарегистрировать транспорт " << std::endl;
    std::cout << "2. Начать гонку\nВыберите действие: ";
    std::cin >> action;
    } while (action == 1);
    bool swapped = false;// сортировка пузырьком ТС
    do 
    {
        swapped = false;
        for (int i = 1; i < 7; i++) 
        {  
               if (registrationList[i - 1]->getTime() > registrationList[i]->getTime())
               {
                transport* temp = registrationList[i - 1];
                registrationList[i - 1] = registrationList[i];
                registrationList[i] = temp;
                swapped = true;
               }
        }
    } while (swapped);

    int counter{1};
    std::cout  << "Результаты гонки:  " << std::endl; // вывод результатов гонки
    for (int i=0;i< 7;i++)
    {
        if (registrationList[i]->getStatus() == 1)
        { 
           std::cout << counter << ". " << registrationList[i]->getName() << ". Время:  ";
           std::cout << registrationList[i]->getTime() << std::endl;
           counter++;
        }
    }
    action = 0;
    std::cout << std::endl;
    std::cout << "1. Провести еще одну гонку " << std::endl;
    std::cout << "2. Выйти " << std::endl;
    std::cout << "Выберите действие: " << std::endl;
    std::cin >> action;

    for (int i = 0; i < 7; i++)
    {
        delete registrationList[i];
     }

    } while (action == 1);

 return EXIT_SUCCESS;
}
