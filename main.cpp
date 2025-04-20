// ����������� ���������� �����/������
#include <iostream>
// ����������� ������������ ������
#include "StudentGroup.h"
#include "Student.h"
// ������� ��� ����������� ���� � ��������� ������ ������������
int get_menu_choice()
{
	int choice;
	std::cout << "\n============== ���� ==============" << std::endl;
	std::cout << "1. �������� ��������" << std::endl;
	std::cout << "2. ������� ��������" << std::endl;
	std::cout << "3. ����� ��������" << std::endl;
	std::cout << "4. ����������� �� �������" << std::endl;
	std::cout << "5. ����������� �� ���� ��������" << std::endl;
	std::cout << "6. �������� ���� ���������" << std::endl;
	std::cout << "7. �����" << std::endl;
	std::cout << "\n�������� ��������: ";
	std::cin >> choice;
	return choice;
}
// ������� ������� ���������
int main()
{
	// ��������� ������ ��� ��������� �������� �����
	setlocale(LC_ALL, "ru");
	// �������� ������� ������ ���������
	StudentGroup group;
	int choice;
	// �������� ���� ���������
	do
	{
		choice = get_menu_choice();
		std::string last_name, birth_date, phone, search_term;
		// ��������� ������ ������������
		switch (choice)
		{
		case 1:
		{
			// ���������� ������ ��������
			std::cout << "\n������� �������: ";
			std::cin >> last_name;
			std::cout << "������� ���� �������� (��.��.����): ";
			std::cin >> birth_date;
			std::cout << "������� �������: ";
			std::cin >> phone;
			group.add_student(Student(last_name, birth_date, phone));
			break;
		}
		case 2:
		{
			// �������� ��������
			std::cout << "\n������� ������� �������� ��� ��������: ";
			std::cin >> last_name;
			group.remove_student(last_name);
			break;
		}
		case 3:
		{
			// ����� ��������
			std::cout << "\n������� ������ ��� ������ (�������/����/�������): ";
			std::cin >> search_term;
			Student* found = group.find_student(search_term);
			if (found)
			{
				std::cout << "������ �������: " << found->get_last_name()
					<< ", " << found->get_birth_date()
					<< ", " << found->get_phone() << std::endl;
			}
			else
			{
				std::cout << "������� �� ������." << std::endl;
			}
			break;
		}
		case 4:
		{
			// ���������� �� �������
			group.sort_by_last_name();
			break;
		}
		case 5:
		{
			// ���������� �� ���� ��������
			group.sort_by_birth_date();
			break;
		}
		case 6:
		{
			// ����������� ���� ���������
			group.display_all();
			break;
		}
		case 7:
		{
			// ����� �� ���������
			std::cout << "����� �� ���������." << std::endl;
			break;
		}
		default:
		{
			// ��������� ��������� ������
			std::cout << "�������� �����. ���������� �����." << std::endl;
			break;
		}
		}
	} while (choice != 7);
}