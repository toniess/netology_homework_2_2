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
		std::cout << "������� ����� ������: ";
		std::cin >> n;
		switch ( static_cast<Months>(n) )
		{
			case Months::January:
				std::cout << "������" << '\n';
				break;

			case Months::February:
				std::cout << "�������" << '\n';
				break;

			case Months::March:
				std::cout << "����" << '\n';
				break;

			case Months::April:
				std::cout << "������" << '\n';
				break;

			case Months::May:
				std::cout << "���" << '\n';
				break;

			case Months::June:
				std::cout << "����" << '\n';
				break;

			case Months::July:
				std::cout << "����" << '\n';
				break;

			case Months::August:
				std::cout << "������" << '\n';
				break;

			case Months::September:
				std::cout << "��������" << '\n';
				break;

			case Months::October:
				std::cout << "�������" << '\n';
				break;

			case Months::November:
				std::cout << "������" << '\n';
				break;

			case Months::December:
				std::cout << "�������" << '\n';
				break;

			default:
				if (n == 0)
				{
					std::cout << "�� ��������!" << '\n';
					return 0;
				}
				std::cout << "������������ �����" << '\n';
		}
	}
}