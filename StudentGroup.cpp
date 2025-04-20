// Подключение заголовочного файла класса StudentGroup
#include "StudentGroup.h"
// Подключение библиотеки ввода/вывода
#include <iostream>
// Подключение библиотеки алгоритмов
#include <algorithm>
// Реализация метода добавления студента в группу
void StudentGroup::add_student(const Student& student)
{
	students.push_back(student);
}
// Реализация метода удаления студента из группы
void StudentGroup::remove_student(const std::string& last_name)
{
	// Поиск студента по фамилии
	for (auto it = students.begin(); it != students.end(); ++it)
	{
		if (it->get_last_name() == last_name)
		{
			// Удаление найденного студента
			students.erase(it);
			std::cout << "Студент " << last_name << " удален." << std::endl;
			return;
		}
	}
	std::cout << "Студент не найден." << std::endl;
}
// Реализация метода отображения всех студентов
void StudentGroup::display_all() const
{
	// Проверка на пустоту группы
	if (students.empty())
	{
		std::cout << "Группа пуста." << std::endl;
		return;
	}
	// Вывод информации о каждом студенте
	for (const auto& student : students)
	{
		std::cout << "Фамилия: " << student.get_last_name()
			<< ", Дата рождения: " << student.get_birth_date()
			<< ", Телефон: " << student.get_phone() << std::endl;
	}
}
// Вспомогательная функция для сравнения студентов по фамилии
static bool compare_by_last_name(const Student& a, const Student& b)
{
	return a.get_last_name() < b.get_last_name();
}
// Вспомогательная функция для сравнения студентов по дате рождения
static bool compare_by_birth_date(const Student& a, const Student& b)
{
	return a.get_birth_date() < b.get_birth_date();
}
// Реализация метода поиска студента
Student* StudentGroup::find_student(const std::string& search_term)
{
	// Поиск по всем полям студента
	for (auto& student : students)
	{
		if (student.get_last_name() == search_term ||
			student.get_birth_date() == search_term ||
			student.get_phone() == search_term)
		{
			return &student;
		}
	}
	return nullptr;
}
// Реализация метода сортировки по фамилии
void StudentGroup::sort_by_last_name()
{
	std::sort(students.begin(), students.end(), compare_by_last_name);
	std::cout << "Сортировка по фамилии завершена." << std::endl;
}
// Реализация метода сортировки по дате рождения
void StudentGroup::sort_by_birth_date()
{
	std::sort(students.begin(), students.end(), compare_by_birth_date);
	std::cout << "Сортировка по дате рождения завершена." << std::endl;
}