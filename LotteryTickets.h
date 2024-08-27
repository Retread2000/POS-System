#pragma once
#include "Product.h"
class LotteryTickets : public Product
{
private:
	float cityTax = 0.05;
	float countyTax = 0.06;

public:
	float getCityTax();
	float getCountyTax();

	LotteryTickets();
	LotteryTickets(string i, string c, string n, float p, int year, int month, int day, int q);

	float computePrice();
};

