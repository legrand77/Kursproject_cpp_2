#include <iostream>
#include "printRacer.h";
void printRacer(int type, int pathLength) // ����� ���� ����� � ����������
{
	if (type == 1) std::cout << "����� ��� ��������� ����������.";
	else if (type == 2) std::cout << "����� ��� ���������� ����������.";
	else if (type == 3) std::cout << "����� ��� ��������� � ���������� ����������.";
	std::cout << " ����������: " << pathLength << std::endl;
};