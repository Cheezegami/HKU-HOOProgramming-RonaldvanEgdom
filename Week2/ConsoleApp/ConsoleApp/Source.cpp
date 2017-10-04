#include <iostream>
#include "Student.h"
#include "Docent.h"

Student student = Student(19, "Karl Hendrikson", "GI-1B", "Arnhem");
Docent docent = Docent(50, "Harry van Handigheid", "Narrative Design", 30);



int main() {
	std::cout << "Teacher age = " << docent.getAge() << " Teacher name = " << docent.getName() << "\n";
	std::cout << "Student age = " << student.getAge() << " Student name = " << student.getName() << "\n";

	char key;
	std::cin >> key;

	return 0;
}