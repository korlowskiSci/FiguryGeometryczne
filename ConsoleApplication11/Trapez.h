#pragma once

class Trapez {
public:
	Trapez();
	Trapez(float a, float b, float h, float c, float d);

	void Pole2(float a, float b, float h);
	void Obwod2(float a, float b, float c, float d);
	

private:
	float a;
	float b;
	float h;
	float c;
	float d;
};
