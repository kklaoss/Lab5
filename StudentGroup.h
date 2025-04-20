// ������ �� ������������� ��������� ������������� �����
#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H
// ����������� ���������� ��������
#include <vector>
// ����������� ������������� ����� ������ Student
#include "Student.h"
// ���������� ������ StudentGroup
class StudentGroup
{
public:
	// ����� ��� ���������� �������� � ������
	void add_student(const Student& student);
	// ����� ��� �������� �������� �� ������ �� �������
	void remove_student(const std::string& last_name);
	// ����� ��� ����������� ���� ��������� ������
	void display_all() const;
private:
	// ������ ��� �������� ��������� ������
	std::vector<Student> students;
};
// ���������� ����� ������ �� ������������� ���������
#endif