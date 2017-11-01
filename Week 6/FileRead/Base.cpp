#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#pragma once


int main() {
	const char* const fileName = "..\\normal.txt";

	std::string text;
	{
		std::ifstream file("..\\normal.txt");
		char c;
		while (file.get(c)) 
			text += c;
	}
	std::reverse(text.begin(), text.end());
	{
		std::ofstream file("..\\reverse.txt");
		file << text;
	}
	
	// Temporary File Storage
	std::ifstream file1("..\\file1.txt");
	std::ifstream file2("..\\file2.txt");
	std::ofstream combined_file("..\\combination.txt");
	std::string line;
	
	// Write in temporary file
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';

	// Remove after being done.
	std::remove("..\\combination.txt");

	std::cout << "File has been converted at ..\\reverse.txt" << std::endl;
	char c;
	std::cin >> c;
	return 0;
}