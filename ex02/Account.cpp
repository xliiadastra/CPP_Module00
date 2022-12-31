#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposits;
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

static int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

static int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

static int	Account::getNbDeposits(void)
{
	return (_totalDeposits);
}

static int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos(void)
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
}

bool	Account::makeWithdrawal(int withdrawal)
{
	// 인출 정보 만들기?
	
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

static void	Account::_displayTimestamp( void )
{
	// 디스플레이 타임 스탬프. 시간?
	time_t		t;
	char	buf[16];

	time(&t);
	strftime(buf, "%Y%m%d_%H%M%S", localtime(&t));
	std::cout << "* " << buf << " *" << std::endl;
}
