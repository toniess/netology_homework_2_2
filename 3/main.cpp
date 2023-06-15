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
	std::cout << "Город: "			<< a.city		<< '\n';
	std::cout << "Улица: "			<< a.street		<< '\n';
	std::cout << "Номер дома: "		<< a.building	<< '\n';
	std::cout << "Номер квартиры: " << a.flat		<< '\n';
	std::cout << "Индекс: "			<< a.index		<< '\n';
}

int main()
{
	setlocale(LC_ALL, "Russia");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Adress adr1 = { "Москва", "Маршала Вершинина", 13, 110, 123421 };
	std::cout << "\n";
	Adress adr2 = { "Омск", "Ленина", 26, 32, 644073 };

	printAdress(adr1);
	printAdress(adr2);
}