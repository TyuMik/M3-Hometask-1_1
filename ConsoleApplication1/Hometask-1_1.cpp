
#include <iostream>

enum class months {
	январь = 1,
	февраль,
	март,
	апрель, 
	май,
	июнь, 
	июль,
	август,
	сентябрь, 
	октябрь,
	ноябрь,
	декабрь
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите номер месяца: ";
	int customMonth;
	std::cin >> customMonth;
	
	while (customMonth != 0) {

		months Month = static_cast<months>(customMonth);

		switch (Month)
		{
		case months::январь:
			std::cout << "Январь" << std::endl;
			break;
		case months::февраль:
			std::cout << "Февраль" << std::endl;
			break;
		case months::март:
			std::cout << "Март" << std::endl;
			break;
		case months::апрель:
			std::cout << "Апрель" << std::endl;
			break;
		case months::май:
			std::cout << "Май" << std::endl;
			break;
		case months::июнь:
			std::cout << "Июнь" << std::endl;
			break;
		case months::июль:
			std::cout << "Июль" << std::endl;
			break;
		case months::август:
			std::cout << "Август" << std::endl;
			break;
		case months::сентябрь:
			std::cout << "Сентябрь" << std::endl;
			break;
		case months::октябрь:
			std::cout << "Октябрь" << std::endl;
			break;
		case months::ноябрь:
			std::cout << "Ноябрь" << std::endl;
			break;
		case months::декабрь:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}

		std::cout << "Введите номер месяца: ";
		std::cin >> customMonth;
	}
	std::cout << "До свидания!";
	return 0;
}