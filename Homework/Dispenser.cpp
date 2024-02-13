#include "Dispenser.h"


Dispenser::Dispenser()
{
	for (int item{ 0 }; item < number_of_items; ++item)
	{

		items_count.push_back(int(rand() % 25));
		items_costs.push_back(int(rand() % 100));

	}
}

Dispenser::Dispenser(std::vector<int> _items_costs, std::vector<int> _items_count)
{
	items_costs = _items_costs;
	items_count = _items_count;
}

Dispenser::~Dispenser() {}

std::vector<int> Dispenser::get_number_of_items() 
{
	return items_costs;
}

std::vector<int> Dispenser::get_costs_of_items()
{
	return items_costs;
}

void Dispenser::make_sale(std::string need_item)
{
	int item_index{0};
	for (int item{ 0 }; item < number_of_items; ++item)
	{
		if (items_discription[item] == need_item)
		{
			item_index = item;
		}
	}
	items_count[item_index] = items_count[item_index] - 1;
	std::cout << "\nItem: [ " << need_item << " ]" << ", with cost: [ " << items_costs[item_index] << " ], was selled" << ", now count is: [ " << items_count[item_index] << " ]\n";
}

std::vector<std::string> Dispenser::get_items_discription()
{
	return items_discription;
}