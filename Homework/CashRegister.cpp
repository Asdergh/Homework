#include "CashRegister.h"


CashRegister::CashRegister()
{
	cash_on_hands = 500;
}

CashRegister::CashRegister(int init_cash)
{
	cash_on_hands = init_cash;
}

CashRegister::~CashRegister()
{
	delete[] cash_history;
}

int CashRegister::get_curent_balance()
{
	return cash_on_hands;
}

void CashRegister::accept_amount(int cash)
{
	cash_on_hands = cash;
	cash_history[operation_number] = cash_on_hands;
	operation_number++;
}

void CashRegister::set_curent_cash(int cash)
{
	cash_on_hands = cash_on_hands - cash;
	cash_history[operation_number] = cash_on_hands;
	operation_number++;
}
