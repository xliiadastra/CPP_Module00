#include "Account.hpp"
#include <ctime>

Account::Account(int initial_deposit)
{
	this->_nbAccounts = 0;
	this->_totalAmount = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void)
{
}

Account::Account(void)
{
}

static int	Account::getNbAccounts(void)
{
}

static int	Account::getTotalAmount(void)
{
}

static int	Account::getNbDeposits(void)
{
}

static int	Account::getNbWithdrawals(void)
{
}

static void	Account::displayAccountsInfos(void)
{
	// 디스플레이 계정 정보 보여주기?
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
}

void	Account::displayStatus( void ) const
{
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
