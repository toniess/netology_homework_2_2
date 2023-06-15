#include <iostream>
#include <Windows.h>

struct Adress
{
	std::string city;
	std::string street;
	int building;
	int flat;
	int index;
};

void printAdress(Adress& a)
{
	std::cout << "�����: "			<< a.city		<< '\n';
	std::cout << "�����: "			<< a.street		<< '\n';
	std::cout << "����� ����: "		<< a.building	<< '\n';
	std::cout << "����� ��������: " << a.flat		<< '\n';
	std::cout << "������: "			<< a.index		<< '\n';
}

int main()
{
	setlocale(LC_ALL, "Russia");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Adress adr1 = { "������", "������� ���������", 13, 110, 123421 };
	std::cout << "\n";
	Adress adr2 = { "����", "������", 26, 32, 644073 };

	printAdress(adr1);
	printAdress(adr2);
}