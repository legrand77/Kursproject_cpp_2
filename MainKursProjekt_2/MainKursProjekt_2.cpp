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
#include "registration.h"
#include "inputRegistration.h"
#include "printRegisration.h"
#include "CounterRegistration.h"

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
    registration registrationList{}; // создание экземпляра класса регистрации
    registrationList.registrationList[0] = terrainBoots(pathLength);
    registrationList.registrationList[1] = broomstick(pathLength);
    registrationList.registrationList[2] = camel(pathLength);
    registrationList.registrationList[3] = centaur(pathLength);
    registrationList.registrationList[4] = eagle(pathLength);
    registrationList.registrationList[5] = camelFast(pathLength);
    registrationList.registrationList[6] = magicCarpet(pathLength);
    
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
        if (typeTransport != 0)
        {
            inputRegistration(type, typeTransport, pathLength, &registrationList); // заполнение листа регистрации 
            valueRegistration = CounterRegistration(&registrationList);// счетчик зарегистрированных ТС
            if (valueRegistration != 0) printRegisration(&registrationList);// печать зарегистрированных ТС
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
               if (registrationList.registrationList[i - 1].time > registrationList.registrationList[i].time)
               {
                transport temp = registrationList.registrationList[i - 1];
                registrationList.registrationList[i - 1] = registrationList.registrationList[i];
                registrationList.registrationList[i] = temp;
                swapped = true;
               }
        }
    } while (swapped);

    int counter{1};
    std::cout  << "Результаты гонки:  " << std::endl; // вывод результатов гонки
    for (int i=0;i< 7;i++)
    {
        if (registrationList.registrationList[i].status == 1) 
        { 
           std::cout << counter << ". " << registrationList.registrationList[i].name << ". Время:  ";
           std::cout << registrationList.registrationList[i].time << std::endl;
           counter++;
        }
    }
    action = 0;
    std::cout << std::endl;
    std::cout << "1. Провести еще одну гонку " << std::endl;
    std::cout << "2. Выйти " << std::endl;
    std::cout << "Выберите действие: " << std::endl;
    std::cin >> action;
    } while (action == 1);

 return EXIT_SUCCESS;
}
