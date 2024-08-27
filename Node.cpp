#include "Node.h"

Node::Node(Product* product) : product(product), next(nullptr)
{
}

Node::~Node()
{
	delete product;
}