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
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = 0;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	return ;
}
Account::Account(int initial_deposit)
{
	time_t	c_time= NULL;
	struct tm * time_info;
	char timeString[18];

	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	time(&c_time);
	time_info = localtime(&c_time);
	strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S]", time_info);
	std:: cout << timeString
			<< " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std:: endl;
	return ;
}

//destructor
Account::~Account(void)
{
	time_t	c_time= NULL;
	struct tm * time_info;
	char timeString[18];
 
	time(&c_time);
	time_info = localtime(&c_time);
	strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S]", time_info);
	std:: cout << timeString
			<< " index:" << this->_accountIndex
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
	time_t	c_time= NULL;
	struct tm * time_info;
	char timeString[18];
 
	time(&c_time);
	time_info = localtime(&c_time);
	strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S]", time_info);
	std:: cout << timeString
			<< " accounts:" << getNbAccounts()
			<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits() 
			<< ";withdrawals:" << getNbWithdrawals() << std:: endl;
}

void	Account::makeDeposit(int deposit)
{
	time_t	c_time= NULL;
	struct tm * time_info;
	char timeString[18];
 
	time(&c_time);
	time_info = localtime(&c_time);
	strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S]", time_info);
	this->_nbDeposits++;
	std:: cout << timeString
			<< " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:" << deposit
			<< ";amount:" << this->_amount + deposit
			<< ";nb_deposits:" << this->_nbDeposits
			<< std:: endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	time_t	c_time= NULL;
	struct tm * time_info;
	char timeString[18];
 
	time(&c_time);
	time_info = localtime(&c_time);
	strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S]", time_info);
	std:: cout << timeString
			<< " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std:: cout << "refused" << std:: endl;
		return false;
	}
	std:: cout << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << this->_nbDeposits
			<< std:: endl;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	return true;
}

int	Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::displayStatus(void) const
{
	time_t	c_time= NULL;
	struct tm * time_info;
	char timeString[18];
 
	time(&c_time);
	time_info = localtime(&c_time);
	strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S]", time_info);
	std:: cout << timeString
			<< " index:" << this->_accountIndex 
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals << std:: endl;
}

