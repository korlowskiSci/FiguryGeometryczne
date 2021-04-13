#include "Trojkat.h"
#include <iostream>

Trojkat::Trojkat() {
	this->a = 0;
	this->h = 0;
	this->b = 0;
	this->c= 0;
}

Trojkat::Trojkat(float a, float h, float b, float c) {
	this->a = a;
	this->h = h;
	this->b = b;
	this->c = c;
}

void Trojkat::Pole3(float a, float h) {
	std::cout << "Podaj podstawe a: ";
	std::cin >> a;
	std::cout << "Podaj wysokosc h: ";
	std::cin >> h;
	if (a > 0 && h > 0) {
		std::cout << "Pole wynosi: " << (a * h) / 2;
	}
}

void Trojkat::Obwod3(float a, float b, float c) {
	std::cout << "Podaj podstawe a: ";
	std::cin >> a;
	std::cout << "Podaj bok b: ";
	std::cin >> b;
	std::cout << "Podaj bok c: ";
	std::cin >> c;
	if (a > 0 && b > 0 && c > 0) {
		std::cout << "Obwod wynosi: " << a + b + c;
	}
	else {
		std::cout << "Niepoprwana liczba.";
	}
}