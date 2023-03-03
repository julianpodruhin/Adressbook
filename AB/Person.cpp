#include "Person.h"

Person::Person(const char* firstName, const char* lastName,
	const char* telephoneNumber, const char* occupation)
	: firstName(firstName), lastName(lastName),
	telephoneNumber(telephoneNumber), occupation(occupation)
{

}

void Person::show(std::ostream& stream) const
{
	stream << std::endl << "First name: " << firstName
		<< std::endl << "Last name: " << lastName
		<< std::endl << "Phone number: " << telephoneNumber
		<< std::endl << "Occupation: " << occupation;
}

void Person::introduce(std::ostream& stream) const
{
	stream << std::endl << "My name is: "
		<< firstName << " " << lastName << std::endl;
	stream << "You can call. My number is: " << telephoneNumber << std::endl;
	stream << "My occupation is: " << occupation << std::endl;
}

Person::~Person()
{

}