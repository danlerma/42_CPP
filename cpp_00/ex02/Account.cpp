#include "Account.hpp"

# include <iostream>
# include <iomanip>
# include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//constructor
Account::Account(void)
{
	return ;
}
Account::Account(int initial_deposit)
{
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts - 1;
	std:: cout << "[TIME] index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std:: endl;
	return ;
}

//destructor
Account::~Account(void)
{
	std:: cout << "[TIME] index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std:: endl;
	return ;
}

//getters
int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount()
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

//functions

void	Account::displayAccountsInfos( void )
{
	//<< Account::_totalAmount
	std:: cout << "[TIME] accounts:"<< ";total:" << ";deposits:" << std:: endl;
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
	// Account::_totalAmount += deposit;
	// Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return true;
}

int	Account::checkAmount(void) const
{
	return 1;
}

void	Account::displayStatus(void) const
{
	std:: cout << "[TIME] index: " << this->_accountIndex << std:: endl;
}

