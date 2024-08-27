#pragma once
#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	Node* current = head;

	while (current != nullptr)
	{
		Node* next = current->next;
		delete current;
		current = next;
	}
}

void LinkedList::add(Product* product)
{
	Node* newNode = new Node(product);
	newNode->next = head;
	head = newNode;
}

void LinkedList::remove(string i)
{
	Node* current = head;
	Node* previous = nullptr;

	while (current != nullptr && current->product->getID() != i)
	{
		previous = current;
		current = current->next;
	}

	if (current == nullptr)
		throw 2;

	if (previous == nullptr)
		head = current->next;
	else
		previous->next = current->next;

	delete current;
}

Product* LinkedList::search(string s)
{
	Node* current = head;

	while (current != nullptr)
	{
		if (current->product->getName() == s ||
			current->product->getCategory() == s)
		{
			return current->product;
		}
		current = current->next;
	}

	return nullptr;
}

void LinkedList::sell(string n, int q) {
	Product* product = search(n);
	if (product) {
		if (product->getQuantity() >= q) {
			product->sell(q);
			if (product->getQuantity() == 0) {
				remove(n);
			}
		}
		else {
			cout << "Not enough stock to sell " << q << " units of product " << product->getName() << ".\n";
		}
	}
	else {
		cout << "Product not found.\n";
	}
}

void LinkedList::display()
{
	Node* current = head;
	
	while (current != nullptr)
	{
		current->product->display();
		current = current->next;
	}
	cout << endl;
}
