// Защита от многократного включения заголовочного файла
#ifndef STUDENT_H
#define STUDENT_H
// Подключение библиотеки строк
#include <string>
// Объявление класса Student
class Student
{
public:
	// Конструктор с параметрами (фамилия, дата рождения, телефон)
	Student(const std::string& last_name,
		const std::string& birth_date,
		const std::string& phone);
	// Метод для получения фамилии студента
	std::string get_last_name() const;
	// Метод для получения даты рождения студента
	std::string get_birth_date() const;
	// Метод для получения телефона студента
	std::string get_phone() const;
private:
	// Поле для хранения фамилии студента
	std::string last_name;
	// Поле для хранения даты рождения студента
	std::string birth_date;
	// Поле для хранения телефона студента
	std::string phone;
};
// Завершение блока защиты от многократного включения
#endif