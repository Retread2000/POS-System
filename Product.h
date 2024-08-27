#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Product
{
protected:
	string ID;
	string category;
	string name;
	string expDate;
	float price;
	int quantity;

public:
	string getID();
	void setID(string i);
	string getCategory();
	void setCategory(string c);
	string getName();
	void setName(string n);
	string getExpDate();
	void setExpDate(int year, int month, int day);
	float getPrice();
	void setPrice(float p);
	int getQuantity();
	void setQuantity(int q);

	Product();
	Product(string i, string c, string n, float p, int year, int month, int day, int q);
	virtual ~Product() = default;

	virtual float computePrice();

	virtual void display();

	void sell(int q);
};

