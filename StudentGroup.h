// Защита от многократного включения заголовочного файла
#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H
// Подключение библиотеки векторов
#include <vector>
// Подключение заголовочного файла класса Student
#include "Student.h"
// Объявление класса StudentGroup
class StudentGroup
{
public:
	// Метод для добавления студента в группу
	void add_student(const Student& student);
	// Метод для удаления студента из группы по фамилии
	void remove_student(const std::string& last_name);
	// Метод для отображения всех студентов группы
	void display_all() const;
	// Метод для поиска студента по любому из полей
	Student* find_student(const std::string& search_term);
	// Метод для сортировки студентов по фамилии
	void sort_by_last_name();
	// Метод для сортировки студентов по дате рождения
	void sort_by_birth_date();
private:
	// Вектор для хранения студентов группы
	std::vector<Student> students;
};
// Завершение блока защиты от многократного включения
#endif