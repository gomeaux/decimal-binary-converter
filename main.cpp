#include <iostream>
#include <vector>
#include <cmath>
void dec_to_bin() {
	int dec = 0;
	std::vector<int>bin;
	std::vector<int>rbin;
	int i = 0;
	int z = 0;
	std::cout << "Enter a positive, whole number in decimal: ";
	std::cin >> dec;
	if (dec < 0) {dec = (dec * -1);}
	if (dec >= 2147483647) {std::cout << "\n" << "Maximum input value of \n" << "2147483647 met or exceeded.\n";}
	std::cout << "\n" << dec << " In binary is ";
	while (dec > 0) {
		bin.push_back(dec % 2); 
		dec = (dec - (dec % 2));
		dec = (dec / 2);
		i++;
	}
	dec = (4 - (bin.size() % 4));
	while (dec > 0) {
		std::cout << "0";
		dec--;
	}
	while (i > 0) { 
		rbin.push_back(bin[i - 1]);  
		std::cout << rbin[z];
		z++;
		i--;
	}
	std::cout << "\n" << "---------------------------------------------------------\n";
}
void bin_to_dec() {
	char str[32] = {};
	int size = 0;
	int output = 0;
	std::cout << "Enter a binary number: ";
	std::cin >> str;
	while (str[size] != '\0') {size++;}
	int z = 0;
	for (int i = (size - 1); i >= 0; i--) {
		if (str[i] == '1') {
			output = (output + pow(2, z));
		}
		z++;
	}
	std::cout << "\n" << str << " In binary is " << output << "\n";
	std::cout << "---------------------------------------------------------\n" << "\n";
}
int main() {
	int operation = 0;
	std::cout << "\n" << "---------------------------------------------------------\n";
	std::cout << "Enter 1 to convert binary to decimal.\n";
	std::cout << "Enter 2 to convert decimal to binary.\n";
	std::cout << "Operation: ";
	std::cin >> operation;
	std::cout << "\n";
	switch(operation) {
		case(1):	bin_to_dec();	break;
		case(2):	dec_to_bin();	break;
		default:	std::cout << "Invalid input.\n" << "---------------------------------------------------------\n";
	}
}