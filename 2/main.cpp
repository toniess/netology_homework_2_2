#include <iostream>
#include <windows.h>

struct Accaunt
{
	std::string number;
	std::string owner;
	int balance;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Accaunt a;
	std::cout << "������� ����� �����: ";
	std::cin >> a.number;
	std::cout << "������� ��� ���������: ";
	std::cin >> a.owner;
	std::cout << "������� ������: ";
	std::cin >> a.balance;

	std::cout << "������� ����� ������: ";
	std::cin >> a.balance;

	std::cout << "��� ����: " << a.number << ", " << a.owner << ", " << a.balance << std::endl;
	return 0;
}