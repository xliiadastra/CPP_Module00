#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_totalAmount += _amount;
	_displayTimestamp();
	std::cout << \
		"Account Index: " << _accountIndex << \
		" | amount: " << checkAmount() << " | created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	std::cout << \
		"Account Index: " << _accountIndex << \
		" | Amount: " << checkAmount() << " | closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	// 디스플레이 계정 정보 보여주기?
	_displayTimestamp();
	std::cout << \
		"Accounts: " << getNbAccounts() << \
		" | Total Amount: " << getTotalAmount() << \
		" | Deposits: " << getNbDeposits() << \
		" | Withdrawals: " << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	// 예금정보 만들기?
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << \
		"Accounts Index: " << _accountIndex << \
		" | p_amount: " << checkAmount() << \
		" | deposit: " << deposit << \
		" | amount: " << checkAmount() + deposit << \
		" | nb_deposits: " << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	// 인출 정보 만들기?
	if (checkAmount() < withdrawal)
	{
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << \
		"Accouts Index: " << _accountIndex << \
		" | p_amount: " << checkAmount() << \
		" | withdrawal: " << withdrawal << \
		" | amount: " << checkAmount() - withdrawal << \
		" | nb_withdrawals: " << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << \
		"Account index: " << _accountIndex << \
		" | Amount: " << checkAmount() << \
		" | Deposits: " << _nbDeposits << \
		" | Withdrawals: " << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	// 디스플레이 타임 스탬프. 시간?
	time_t		t;
	char	buf[16];

	time(&t);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", localtime(&t));
	std::cout << "* " << buf << " *" << std::endl;
}
