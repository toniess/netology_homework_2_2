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
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> a.number;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> a.owner;
	std::cout << "¬ведите баланс: ";
	std::cin >> a.balance;

	std::cout << "¬ведите новый баланс: ";
	std::cin >> a.balance;

	std::cout << "¬аш счЄт: " << a.number << ", " << a.owner << ", " << a.balance << std::endl;
	return 0;
}