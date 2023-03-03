#include "Student.h"

Student::Student(const char* firstName, const char* lastName,
	const char* telephoneNumber, const char* occupation, int courseNumber)
	: Person(firstName, lastName, telephoneNumber, occupation), course(courseNumber)
{

}

void Student::show(std::ostream& stream) const
{
	Person::show(stream);
	stream << std::endl << "Course number : " << course << std::endl;
}

void Student::introduce(std::ostream& stream) const
{
	Person::introduce(stream);
	stream << "I study at: " << course << "th course" << std::endl;
}

Person* Student::clone() const
{
	return new Student(firstName.c_str(), lastName.c_str(),
		telephoneNumber.c_str(), occupation.c_str(), course);
}

Student:: ~Student()
{

}