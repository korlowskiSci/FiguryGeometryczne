#include <iostream>
#include "Kolo.h"

Kolo::Kolo() {
	this->promien = 0;
}

Kolo::Kolo(float promien) {
	this->promien = promien;
}

void Kolo::Pole(float promien) {
	std::cout << "Podaj promien kola: ";
	std::cin >> promien;
	if (promien > 0) {
		std::cout << "Wynik to: " << (promien * 2) * 3.14 << std::endl;
	}
	else {
		std::cout << "Niepoprwana liczba.";
	}
}