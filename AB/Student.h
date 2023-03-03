#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

class Student : public Person
{
public:
	Student(const char* firstName, const char* lastName,
		const char* telephoneNumber, const char* occupation, int courseNumber);
	void virtual show(std::ostream& stream) const override;
	void virtual introduce(std::ostream& stream) const override;
	virtual Person* clone() const override;
	Student() = default;
	virtual ~Student();
private:
	int course;
};
#endif
