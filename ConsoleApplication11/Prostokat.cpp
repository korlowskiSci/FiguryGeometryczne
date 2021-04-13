#include "Prostokat.h"
#include <iostream>

Prostokat::Prostokat() {
	this->a = 0;
	this->b = 0;
}

Prostokat::Prostokat(float a, float b) {
	this->a = a;
	this->b = b;
}

void Prostokat::Pole1(float a, float b) {
	std::cout << "Podaj bok a: ";
	std::cin >> a;
	std::cout << "Podaj bok b: ";
	std::cin >> b;
	if (a > 0 && b > 0) {
		std::cout << "Pole jest rowne: " << a * b;
	}
	else {
		std::cout << "Niepoprwana liczba.";
	}
	
	
}

void Prostokat::Obwod1(float a, float b) {
	std::cout << "Podaj bok a: ";
	std::cin >> a;
	std::cout << "Podaj bok b: ";
	std::cin >> b;
	if (a > 0 && b > 0) {
		std::cout << "Obwod jest rowny: " << (2 * a) + (2 * b);
	}
	else {
		std::cout << "Niepoprwana liczba.";
	}
}