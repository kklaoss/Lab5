// ����������� ������������� ����� ������ Student
#include "Student.h"
// ���������� ������������ ������ Student � �������������� �����
Student::Student(const std::string& last_name,
    const std::string& birth_date,
    const std::string& phone)
    : last_name(last_name), birth_date(birth_date), phone(phone) {
}
// ���������� ������ ��������� ������� ��������
std::string Student::get_last_name() const { return last_name; }
// ���������� ������ ��������� ���� �������� ��������
std::string Student::get_birth_date() const { return birth_date; }
// ���������� ������ ��������� �������� ��������
std::string Student::get_phone() const { return phone; }