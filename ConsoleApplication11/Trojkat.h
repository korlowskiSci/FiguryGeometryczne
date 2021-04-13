#pragma once

class Trojkat {
public:
	Trojkat();
	Trojkat(float a, float h, float b, float c);

	void Pole3(float a, float h);
	void Obwod3(float a, float b, float c);

private:
	float a;
	float h;
	float b;
	float c;
};
