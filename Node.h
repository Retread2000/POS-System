#pragma once
#include "Product.h"

class Node
{
public:
	Product* product;
	Node* next;

	Node(Product* product);
	~Node();
};

