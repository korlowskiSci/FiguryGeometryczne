#include <iostream>
#include "Kolo.h"
#include "Prostokat.h"
#include "Szescian.h"
#include "Trapez.h"
#include "Trojkat.h"
#include <vector>

int main()
{
	float promien = 0;
	float a = 0;
	float b = 0;
	float h = 0;
	float c = 0;
	float d = 0;
	int wybor = 0;
	int wybranaFigura = 0;
	while (wybranaFigura != 6) {
		if (wybranaFigura == 0) {
			std::cout << "WYBIERZ FIGURE" << std::endl;
			std::cout << "------------" << std::endl;
			std::cout << "1. Kolo" << std::endl;
			std::cout << "2. Prostokat" << std::endl;
			std::cout << "3. Szescian" << std::endl;
			std::cout << "4. Trapez" << std::endl;
			std::cout << "5. Trojkat" << std::endl;
			std::cout << "6. Zamknij program" << std::endl << std::endl;
			std::cout << "Twoj wybor: ";
			std::cin >> wybranaFigura;
		}
		else if (wybranaFigura == 1) {
			std::cout << "------------" << std::endl;
			Kolo kolo(promien);
			kolo.Pole(promien);
			std::cout << std::endl;
			wybranaFigura = 0;
		}
		else if (wybranaFigura == 2) {
			std::cout << "------------" << std::endl;
			Prostokat prostokat(a, b);
		
			if (wybor == 0) {
				std::cout << "1. Oblicz pole.\n";
				std::cout << "2. Oblicz obwod.\n";
				std::cout << "3. Wyjdz.\n";
				std::cout << "Twoj wybor: ";
				std::cin >> wybor;
				std::cout << std::endl;
			}
			else if (wybor == 1) {
				prostokat.Pole1(a, b);
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
			else if (wybor == 2) {
				prostokat.Obwod1(a, b);
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
			else if (wybor == 3) {
				wybranaFigura = 0;
				wybor = 0;
			}
			else {
				std::cout << "Nie ma takiej opcji.";
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
		}
		else if (wybranaFigura == 3) {
			std::cout << "------------" << std::endl;
			Szescian szescian(a);
			szescian.Objetosc(a);
			std::cout << std::endl << std::endl;
			wybranaFigura = 0;
		}
		else if (wybranaFigura == 4) {
			std::cout << "------------" << std::endl;
			Trapez trapez(a, b, h, c, d);

			if (wybor == 0) {
				std::cout << "1. Oblicz pole.\n";
				std::cout << "2. Oblicz obwod.\n";
				std::cout << "3. Wyjdz.\n";
				std::cout << "Twoj wybor: ";
				std::cin >> wybor;
				std::cout << std::endl;
			}
			else if (wybor == 1) {
				trapez.Pole2(a, b, h);
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
			else if (wybor == 2) {
				trapez.Obwod2(a, b, c, d);
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
			else if (wybor == 3) {
				wybranaFigura = 0;
				wybor = 0;
			}
			else {
				std::cout << "Nie ma takiej opcji.";
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
		}
		else if (wybranaFigura == 5) {
			Trojkat trojkat(a, h, b, c);
			std::cout << std::endl;
			
			if (wybor == 0) {
				std::cout << "1. Oblicz pole.\n";
				std::cout << "2. Oblicz obwod.\n";
				std::cout << "3. Wyjdz.\n";
				std::cout << "Twoj wybor: ";
				std::cin >> wybor;
				std::cout << std::endl;
			}
			else if (wybor == 1) {
				trojkat.Pole3(a, h);
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
			else if (wybor == 2) {
				trojkat.Obwod3(a, b, c);
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
			else if (wybor == 3) {
				wybranaFigura = 0;
				wybor = 0;
			}
			else {
				std::cout << "Nie ma takiej opcji.";
				std::cout << std::endl << std::endl;
				wybranaFigura = 0;
				wybor = 0;
			}
		}
		else if (wybranaFigura < 0 || wybranaFigura > 6) {
		std::cout << "Nie ma takiej opcji. \n\n";
		wybranaFigura = 0;
		}
	}
}
