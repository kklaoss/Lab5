// ����������� ������������� ����� ������ StudentGroup
#include "StudentGroup.h"
// ����������� ���������� �����/������
#include <iostream>
// ����������� ���������� ����������
#include <algorithm>
// ���������� ������ ���������� �������� � ������
void StudentGroup::add_student(const Student& student)
{
    students.push_back(student);
}
// ���������� ������ �������� �������� �� ������
void StudentGroup::remove_student(const std::string& last_name)
{
    // ����� �������� �� �������
    for (auto it = students.begin(); it != students.end(); ++it)
    {
        if (it->get_last_name() == last_name)
        {
            // �������� ���������� ��������
            students.erase(it);
            std::cout << "������� " << last_name << " ������." << std::endl;
            return;
        }
    }
    std::cout << "������� �� ������." << std::endl;
}
// ���������� ������ ����������� ���� ���������
void StudentGroup::display_all() const
{
    // �������� �� ������� ������
    if (students.empty())
    {
        std::cout << "������ �����." << std::endl;
        return;
    }

    // ����� ���������� � ������ ��������
    for (const auto& student : students)
    {
        std::cout << "�������: " << student.get_last_name()
            << ", ���� ��������: " << student.get_birth_date()
            << ", �������: " << student.get_phone() << std::endl;
    }
}