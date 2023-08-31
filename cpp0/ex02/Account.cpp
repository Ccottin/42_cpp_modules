#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	_nbAccounts++;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{ 
	time_t 		t;
	struct tm	*ptm;
	char		buffer[20];

	time(&t);
	ptm = localtime(&t);
	strftime(buffer, 20, "%Y%m%d_%H%M%S", ptm);
	std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"; 
	std::cout << Account::_totalAmount << ";deposits:";
	std::cout << Account::_totalNbDeposits << ";withdrawals:";
	std::cout << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:";
	std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals <<std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:";
	std::cout << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused\n";
		return (false);
	}
	this->_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

/*-----Getters-----*/

int	Account::getNbAccounts(void)	{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)	{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits(void)	{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)	{
	return (Account::_totalNbWithdrawals);
}
