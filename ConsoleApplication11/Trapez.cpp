#include "Trapez.h"
#include <iostream>

Trapez::Trapez() {
	this->a = 0;
	this->b = 0;
	this->h = 0;
	this->c = 0;
	this->d = 0;
}

Trapez::Trapez(float a, float b, float h, float c, float d) {
	this->a = a;
	this->b = b;
	this->h = h;
	this->c = c;
	this->d = d;
}

void Trapez::Pole2(float a, float b, float h) {
	std::cout << "Podaj podstawe a: ";
	std::cin >> a;
	std::cout << "Podaj podstawe b: ";
	std::cin >> b;
	std::cout << "Podaj wysokosc h: ";
	std::cin >> h;
	if (a > 0 && b > 0 && h > 0) {
		std::cout << "Pole wynosi: " << ((a + b) * h) / 2;
	}
	else {
		std::cout << "Niepoprwana liczba.";
	}
}

void Trapez::Obwod2(float a, float b, float c, float d) {
	std::cout << "Podaj podstawe a: ";
	std::cin >> a;
	std::cout << "Podaj podstawe b: ";
	std::cin >> b;
	std::cout << "Podaj bok c: ";
	std::cin >> c;
	std::cout << "Podaj bok d: ";
	std::cin >> d;
	if (a > 0 && b > 0 && c > 0 && d > 0) {
		std::cout << "Obwod wynosi: " << a + b + c + d;
	}
	else {
		std::cout << "Niepoprwana liczba.0";
	}
}