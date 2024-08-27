#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void add(Product* product);
	void remove(string i);
	Product* search(string i);
	void sell(string i, int q);
	void display();
};

