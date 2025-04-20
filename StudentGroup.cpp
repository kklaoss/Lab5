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
// ��������������� ������� ��� ��������� ��������� �� �������
static bool compare_by_last_name(const Student& a, const Student& b)
{
	return a.get_last_name() < b.get_last_name();
}
// ��������������� ������� ��� ��������� ��������� �� ���� ��������
static bool compare_by_birth_date(const Student& a, const Student& b)
{
	return a.get_birth_date() < b.get_birth_date();
}
// ���������� ������ ������ ��������
Student* StudentGroup::find_student(const std::string& search_term)
{
	// ����� �� ���� ����� ��������
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
// ���������� ������ ���������� �� �������
void StudentGroup::sort_by_last_name()
{
	std::sort(students.begin(), students.end(), compare_by_last_name);
	std::cout << "���������� �� ������� ���������." << std::endl;
}
// ���������� ������ ���������� �� ���� ��������
void StudentGroup::sort_by_birth_date()
{
	std::sort(students.begin(), students.end(), compare_by_birth_date);
	std::cout << "���������� �� ���� �������� ���������." << std::endl;
}