// Подключение заголовочного файла класса Student
#include "Student.h"
// Реализация конструктора класса Student с инициализацией полей
Student::Student(const std::string& last_name,
    const std::string& birth_date,
    const std::string& phone)
    : last_name(last_name), birth_date(birth_date), phone(phone) {
}
// Реализация метода получения фамилии студента
std::string Student::get_last_name() const { return last_name; }
// Реализация метода получения даты рождения студента
std::string Student::get_birth_date() const { return birth_date; }
// Реализация метода получения телефона студента
std::string Student::get_phone() const { return phone; }