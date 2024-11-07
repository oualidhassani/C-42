#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) 
 {
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
}

int Account::getNbAccounts(void) 
{
    return _nbAccounts;
}
int	Account::getTotalAmount(void)
{
    return _totalAmount;
}

 int    Account::getNbDeposits(void)
 {
    return _totalNbDeposits;
 }

int	Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) 
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t time_display;

    time_display = time(NULL);

    std::cout << "[" << time_display << "] "; 
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _amount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amout:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;  
     std::cout << std::endl ;
     std::cout << std::endl  << "--------------->";

}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    
    std::cout << "index:" << _accountIndex << ";amout:" << _amount <<  ";deposits:" << _nbDeposits << ";withdrawls:" <<  withdrawal << std::endl;

     std::cout << std::endl << "<---------------";
    return(false);

}