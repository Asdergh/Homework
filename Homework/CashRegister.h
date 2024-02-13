#pragma once
class CashRegister
{
private:

	int cash_on_hands;
	int* cash_history = new int[100];
	int operation_number{ 0 };

public:
	
	CashRegister();
	CashRegister(int);
	~CashRegister();

	int get_curent_balance();
	void accept_amount(int);
	void set_curent_cash(int);

};

