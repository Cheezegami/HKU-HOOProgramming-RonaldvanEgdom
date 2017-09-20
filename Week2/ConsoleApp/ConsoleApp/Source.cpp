#include <iostream>
#include "Student.h"
#include "Docent.h"

Student student = Student(19, "Karl Hendrikson", "GI-1B", "Arnhem");
Docent docent = Docent(50, "Harry van Handigheid", "Narrative Design", 30);



int main() {
	std::cout << "Teacher age = " << docent.getAge(docent.age) << " Teacher name = " << docent.getName(docent.name) << "\n";
	std::cout << "Student age = " << student.getAge(student.age) << " Student name = " << student.getName(student.name) << "\n";

	char key;
	std::cin >> key;

	return 0;
}