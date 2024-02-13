#include <iostream>
#include "Dispenser.h"
#include "CashRegister.h"


void show_selection()
{
	Dispenser disp;
	std::vector<std::string> items = disp.get_items_discription();

	for (int item{ 0 }; item < items.size(); item++)
	{
		std::cout << "\npress: [\t" << item << "\t]" << ", to get the: [\t" << items[item] << "\t]\n";
	}
}

void sell_product(int item_number)
{
	CashRegister cash_reg;
	Dispenser disp;

	std::cout << "\ntest one\n";
	std::vector<int> costs = disp.get_costs_of_items();
	std::cout << "\ntest two\n" << costs.size();
	std::vector<std::string> items = disp.get_items_discription();
	std::cout << "\ntest three\n";
	int curent_cash = cash_reg.get_curent_balance();

	switch (item_number) {

		case 0:

			if (curent_cash < costs[1])
			{
				std::cout << "sorry you haven't ehought mony";
			}
			else
			{
				disp.make_sale(items[1]);
				curent_cash = curent_cash - costs[1];
				cash_reg.set_curent_cash(curent_cash);
				std::cout << "\nCurent Cash is: [ " << curent_cash << " ]\n";
			}
			break;
			
		case 1:

			if (curent_cash < costs[2])
			{
				std::cout << "sorry you haven't ehought mony";
			}
			else
			{
				disp.make_sale(items[2]);
				curent_cash = curent_cash - costs[2];
				cash_reg.set_curent_cash(curent_cash);
				std::cout << "\nCurent Cash is: [ " << curent_cash << " ]\n";
			}
			break;

		case 2:

			if (curent_cash < costs[3])
			{
				std::cout << "sorry you haven't ehought mony";
			}
			else
			{
				disp.make_sale(items[3]);
				curent_cash = curent_cash - costs[3];
				cash_reg.set_curent_cash(curent_cash);
				std::cout << "\nCurent Cash is: [ " << curent_cash << " ]\n";
			}
			break;

		case 3:

			if (curent_cash < costs[4])
			{
				std::cout << "sorry you haven't ehought mony";
			}
			else
			{
				disp.make_sale(items[4]);
				curent_cash = curent_cash - costs[4];
				cash_reg.set_curent_cash(curent_cash);
				std::cout << "\nCurent Cash is: [ " << curent_cash << " ]\n";
			}
			break;

		case 4:

			if (curent_cash < costs[5])
			{
				std::cout << "sorry you haven't ehought mony";
			}
			else
			{
				disp.make_sale(items[5]);
				curent_cash = curent_cash - costs[5];
				cash_reg.set_curent_cash(curent_cash);
				std::cout << "\nCurent Cash is: [ " << curent_cash << " ]\n";
			}
			break;


	}
}
int main()
{
	int option{0};

	for (; ;)
	{
		if (option == 6){
			break;
		}
		show_selection();
		std::cin >> option;
		sell_product(option);
	}
	return 0;
}