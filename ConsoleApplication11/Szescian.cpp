#include "Szescian.h"
#include <iostream>

Szescian::Szescian() {
	this->a = 0;
}

Szescian::Szescian(float a) {
	this->a = a;
}

void Szescian::Objetosc(float a) {
	std::cout << "Podaj krawedz a: ";
	std::cin >> a;
	if (a > 0) {
		std::cout << "Objetosc wynosi: " << a * a * a;
	}
	else {
		std::cout << "Niepoprwana licza.";
	}
}
