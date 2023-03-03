#include <fstream>
#include <array>
#include <iostream>

#include "Teacher.h"
#include "Student.h"
#include "Person.h"

int main()
{
	const char* fileName = "People.txt";
	const int PERSONS = 5;

	auto student1 = Student("Richard", "Lee", "344-33-11", "Developer", 1);
	auto student2 = Student("Oliver", "Chan", "111-11-11", "Engineer", 4);
	auto student3 = Student("Sarah", "Brown", "333-33-33", "Teacher", 3);
	auto student4 = Student("John", "Doe", "123-45-67", "Astronom", 5);
	auto teacher = Teacher("Leonardo", "Da Vinci", "456-32-11", "Professor", { student1, student2, student3 });

	teacher.take_student(student4);
	std::array<Person*, PERSONS> people = { &student1, &student2, &student3, &teacher, &student4 };

	auto flags = std::fstream::in | std::fstream::out | std::fstream::app;
	std::fstream fout(fileName, flags);

	for (auto person : people)
	{
		person->introduce(std::cout);
		person->show(fout);
		fout << "--------------------------" << std::endl;
	}

	fout.close();

	return 0;
}