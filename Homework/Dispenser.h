#pragma once
#include<iostream>
#include<vector>
#include<string>

class Dispenser
{

private:

	int number_of_items{ 5 };
	std::vector<int> items_costs;
	std::vector<int> items_count;
	std::vector<std::string> items_discription{ "Coke-Cola", "Cake", "Chipses", "Buble-gum", "Cookes" };

public:

	Dispenser();
	Dispenser(std::vector<int>, std::vector<int>);
	~Dispenser();

	std::vector<int> get_number_of_items();
	std::vector<int> get_costs_of_items();
	std::vector<std::string> get_items_discription();
	void make_sale(std::string);

};

