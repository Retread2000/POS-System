#pragma once
#include "Product.h"
class Tobacco : public Product
{
private:
	float specialTax = 0.1;

public:
	Tobacco();
	Tobacco(string i, string nc, string n, float p, int year, int month, int day, int q);
	float computePrice();
};

