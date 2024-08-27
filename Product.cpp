#include "Product.h"

string Product::getID()
{
	return ID;
}

void Product::setID(string i)
{
	ID = i;
}

string Product::getCategory()
{
	return category;
}

void Product::setCategory(string c)
{
	category = c;
}

string Product::getName()
{
	return name;
}

void Product::setName(string n)
{
	name = n;
}

string Product::getExpDate()
{
	return expDate;
}

void Product::setExpDate(int year, int month, int day)
{
	expDate = "";
	expDate.append(to_string(month));
	expDate.append("-");
	expDate.append(to_string(day));
	expDate.append("-");
	expDate.append(to_string(year));
}

float Product::getPrice()
{
	return price;
}

void Product::setPrice(float p)
{
	price = p;
}

int Product::getQuantity()
{
	return quantity;
}

void Product::setQuantity(int q)
{
	quantity = q;
}

Product::Product() : Product("Not assigned", "Not assigned", "Not assigned", 0, 2025, 1, 1, 1)
{
}

Product::Product(string i, string c, string n, float p, int year, int month, int day, int q)
{
	setID(i);
	setCategory(c);
	setName(n);
	setPrice(p);
	setExpDate(year, month, day);
	setQuantity(q);
}

float Product::computePrice()
{
	return price * quantity;
}

void Product::display()
{
	cout << "[ID: " << getID() << "] [Name: " << getName() << "] [Category: " << getCategory() 
		<< "] [Price: " << computePrice() << "] [Expiration Date: " << getExpDate() << "]\n";
}

void Product::sell(int q)
{
	quantity -= q;
}
