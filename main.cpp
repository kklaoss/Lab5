// Подключение библиотеки ввода/вывода
#include <iostream>
// Подключение заголовочных файлов
#include "StudentGroup.h"
#include "Student.h"
// Функция для отображения меню и получения выбора пользователя
int get_menu_choice()
{
	int choice;
	std::cout << "\n============== Меню ==============" << std::endl;
	std::cout << "1. Добавить студента" << std::endl;
	std::cout << "2. Удалить студента" << std::endl;
	std::cout << "3. Найти студента" << std::endl;
	std::cout << "4. Сортировать по фамилии" << std::endl;
	std::cout << "5. Сортировать по дате рождения" << std::endl;
	std::cout << "6. Показать всех студентов" << std::endl;
	std::cout << "7. Выход" << std::endl;
	std::cout << "\nВыберите действие: ";
	std::cin >> choice;
	return choice;
}
// Главная функция программы
int main()
{
	// Установка локали для поддержки русского языка
	setlocale(LC_ALL, "ru");
	// Создание объекта группы студентов
	StudentGroup group;
	int choice;
	// Основной цикл программы
	do
	{
		choice = get_menu_choice();
		std::string last_name, birth_date, phone, search_term;
		// Обработка выбора пользователя
		switch (choice)
		{
		case 1:
		{
			// Добавление нового студента
			std::cout << "\nВведите фамилию: ";
			std::cin >> last_name;
			std::cout << "Введите дату рождения (ДД.ММ.ГГГГ): ";
			std::cin >> birth_date;
			std::cout << "Введите телефон: ";
			std::cin >> phone;
			group.add_student(Student(last_name, birth_date, phone));
			break;
		}
		case 2:
		{
			// Удаление студента
			std::cout << "\nВведите фамилию студента для удаления: ";
			std::cin >> last_name;
			group.remove_student(last_name);
			break;
		}
		case 3:
		{
			// Поиск студента
			std::cout << "\nВведите данные для поиска (фамилия/дата/телефон): ";
			std::cin >> search_term;
			Student* found = group.find_student(search_term);
			if (found)
			{
				std::cout << "Найден студент: " << found->get_last_name()
					<< ", " << found->get_birth_date()
					<< ", " << found->get_phone() << std::endl;
			}
			else
			{
				std::cout << "Студент не найден." << std::endl;
			}
			break;
		}
		case 4:
		{
			// Сортировка по фамилии
			group.sort_by_last_name();
			break;
		}
		case 5:
		{
			// Сортировка по дате рождения
			group.sort_by_birth_date();
			break;
		}
		case 6:
		{
			// Отображение всех студентов
			group.display_all();
			break;
		}
		case 7:
		{
			// Выход из программы
			std::cout << "Выход из программы." << std::endl;
			break;
		}
		default:
		{
			// Обработка неверного выбора
			std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
			break;
		}
		}
	} while (choice != 7);
}