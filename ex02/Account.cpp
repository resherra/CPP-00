#include "Account.hpp"
#include <iostream>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::~Account()
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl; 
}

Account::Account(int initial_amount)
{
    _amount = initial_amount;
    _accountIndex = _nbAccounts++;    
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;

    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
}


void    Account::displayAccountsInfos()
{
    std::cout << "accounts:" << _nbAccounts << ";total:" <<  _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus() const
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;    
}

void    Account::makeDeposit(int deposit)
{
    _totalNbDeposits++;
    _nbDeposits++;
    int old_amount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:"  << old_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;    
}

bool    Account::makeWithdrawal(int withdrawal)
{
    //withdrawal
}

