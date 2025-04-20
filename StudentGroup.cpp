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