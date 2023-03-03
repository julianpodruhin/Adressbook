#ifndef TEACHER_H_
#define TEACHER _H_

#include "Person.h"
#include "Student.h"

#include <vector>

class Teacher : public Person
{
public:
	Teacher(const char* firstName, const char* lastName, const char* telephoneNumber,
		const char* occupation, const std::vector<Student> students);
	Teacher(const char* firstName, const char* lastName, const char* telephoneNumber,
		const char* occupation, std::initializer_list<Student> list);
	Teacher() = default;
	void virtual show(std::ostream& stream) const override;
	void virtual introduce(std::ostream& stream) const override;
	void take_student(const Student& student);
	virtual Person* clone() const override;
	virtual ~Teacher();
private:
	std::vector<Student> students;
};

#endif
