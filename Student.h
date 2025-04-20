#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student
{
public:
	Student(const std::string& last_name,
		const std::string& birth_date,
		const std::string& phone);
	std::string get_last_name() const;
	std::string get_birth_date() const;
	std::string get_phone() const;
private:
	std::string last_name;
	std::string birth_date;
	std::string phone;
};
#endif