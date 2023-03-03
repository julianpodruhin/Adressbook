#include "Teacher.h"
#include "Student.h"

Teacher::Teacher(const char* firstName, const char* lastName, const char* telephoneNumber,
	const char* occupation, const std::vector<Student> students)
	: Person(firstName, lastName, telephoneNumber, occupation), students(students)
{

}

Teacher::Teacher(const char* firstName, const char* lastName, const char* telephoneNumber,
	const char* occupation, std::initializer_list<Student> list)
	: Person(firstName, lastName, telephoneNumber, occupation)
{
	for (Student item : list)
	{
		students.push_back(item);
	}
}

void Teacher::show(std::ostream& stream) const
{
	Person::show(stream);
	stream << std::endl << std::endl
		<< "Students list: " << std::endl;
	for (const auto& student : students)
	{
		student.show(stream);
	}
}

void Teacher::introduce(std::ostream& stream) const
{
	Person::introduce(stream);
	stream << "I have " << students.size()
		<< " students that I am teaching" << std::endl;
}

void Teacher::take_student(const Student& student)
{
	students.push_back(student);
}

Person* Teacher::clone() const
{
	return new Teacher(firstName.c_str(), lastName.c_str(),
		telephoneNumber.c_str(), occupation.c_str(), students);
}

Teacher:: ~Teacher()
{

}