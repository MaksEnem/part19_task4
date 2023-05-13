#include <iostream>
#include <fstream>

int main() {

	char buffer[10];
	std::ifstream picture;

	picture.open("file.png", std::ios::binary);

	if (picture.is_open()) {

		std::cout << "File is open\n";
		std::cout << std::endl;

	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}
	
	picture.read(buffer, sizeof(buffer));

		for (int i = 0; i < picture.gcount(); ++i) {

			std::cout << buffer[i];

			if (buffer[i] == -119) {

				std::cout << "Ok\n";

			}

		}

	

	picture.close();
}