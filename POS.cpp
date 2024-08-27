#include "LotteryTickets.h"
#include "Tobacco.h"
#include "LinkedList.h"

void menu()
{
	cout << "Menu\n";
	cout << "~~~~\n";
	cout << "1. Search Inventory\n";
	cout << "2. Make Sale\n";
	cout << "3. Add Inventory\n";
	cout << "4. Remove Inventory\n";
	cout << "5. Exit\n";
	cout << "Enter number to select action: ";
}

int main()
{
	LinkedList inventory;
	inventory.add(new Tobacco());
	inventory.add(new LotteryTickets());

	cout << "Convenience POS\n";
	cout << "~~~~~~~~~~~~~~~\n";
	

	while (true)
	{
		int num = 0;
		string i;
		string n;
		string c;
		float p;
		int year;
		int month;
		int day;
		int q;
		string s = "";

		cout << endl;
		inventory.display();
		
		menu();
		cin >> num;
		switch (num)
		{
		case 1:
		{
			cout << "Search for Exact Product or Category: ";
			cin >> s;

			cout << "Results:\n";
			Product* product = inventory.search(s);
			//product->display();

			if (!product)
				cout << "Product not found.\n";
			break;
		}
		case 2:
		{
			cout << "Enter ID for inventory being sold: ";
			cin >> i;
			cout << "Enter quantity of item being sold: ";
			cin >> q;
			inventory.sell(n, q);
			break;
		}
		case 3:
		{
			cout << "Enter ID for new inventory item: ";
			cin >> i;
			cout << "Enter name for new inventory item: ";
			cin >> n;
			cout << "Enter category for new inventory item: ";
			cin >> c;
			cout << "Enter price for new inventory item: ";
			cin >> p;
			cout << "Enter year of expiration: ";
			cin >> year;
			cout << "Enter month of expiration: ";
			cin >> month;
			cout << "Enter day of expiration: ";
			cin >> day;
			cout << "Enter quantity: ";
			cin >> q;
			inventory.add(new Product(i, c, n, p, year, month, day, q));
			break;
		}
		case 4:
		{
			cout << "Enter ID for inventory item removal: ";
			cin >> i;
			inventory.remove(i);
			break;
		}
		case 5:
		{
			cout << "\nExiting program...\n";
			return 0;
		}
		default:
		{
			throw 1;
		}
		}
	}
	

	return 0;
}