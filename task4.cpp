#include <iostream>
#include <fstream>

int main() {

	char buffer[8];
	std::ifstream picture;

	picture.open("file.png", std::ios::binary);

	if (picture.is_open()) {

		std::cout << "File is open\n";
		std::cout << std::endl;

		picture.read(buffer, sizeof(buffer));

		if ((buffer[0] == -119) && (buffer[1] == 'P') && (buffer[2] == 'N') && (buffer[3] == 'G')) {

			std::cout << "This file is a PNG image" << std::endl;

		}
		else {

			std::cout << "Unknown file type" << std::endl;

		}

		picture.close();

	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}	
}