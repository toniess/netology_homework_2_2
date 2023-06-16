#include <iostream>

enum class Months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{
	std::setlocale(LC_ALL, "russian");
	int n;
	while (true)
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> n;
		switch ( static_cast<Months>(n) )
		{
			case Months::January:
				std::cout << "Январь" << '\n';
				break;

			case Months::February:
				std::cout << "Февраль" << '\n';
				break;

			case Months::March:
				std::cout << "Март" << '\n';
				break;

			case Months::April:
				std::cout << "Апрель" << '\n';
				break;

			case Months::May:
				std::cout << "Май" << '\n';
				break;

			case Months::June:
				std::cout << "Июнь" << '\n';
				break;

			case Months::July:
				std::cout << "Июль" << '\n';
				break;

			case Months::August:
				std::cout << "Август" << '\n';
				break;

			case Months::September:
				std::cout << "Сентябрь" << '\n';
				break;

			case Months::October:
				std::cout << "Октябрь" << '\n';
				break;

			case Months::November:
				std::cout << "Ноябрь" << '\n';
				break;

			case Months::December:
				std::cout << "Декабрь" << '\n';
				break;

			default:
				if (n == 0)
				{
					std::cout << "До свидания!" << '\n';
					return 0;
				}
				std::cout << "Неправильный номер" << '\n';
		}
	}
}