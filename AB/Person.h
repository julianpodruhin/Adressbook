#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <ostream>

class Person
{
public:
	Person(const char* firstName, const char* lastName,
		const char* telephoneNumber, const char* occupation);
	Person() = default;
	void virtual show(std::ostream& stream) const;
	void virtual introduce(std::ostream& stream) const = 0;
	virtual Person* clone() const = 0;
	virtual ~Person() = 0;
protected:
	std::string firstName;
	std::string lastName;
	std::string telephoneNumber;
	std::string occupation;
};

#endif
