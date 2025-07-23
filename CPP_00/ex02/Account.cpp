/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:37:07 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/23 18:42:11 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <string>
# include <ctime>
# include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::t::_displayTimestamp()
{
    std::time_t now;
    
    now = std::time(NULL);
    std::cout << "[" << std::put_time(std::localtime(&now), "%Y%m%d_%H%M%S") << "]";
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" 
        << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" 
        << _amount << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;
}

int	Account::getNbAccounts()
{
    return(_nbAccounts);
}

int	Account::getTotalAmount()
{
    return(_totalAmount);
}

int	Account::getNbDeposits()
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
    return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount <<
     ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount 
        << ";deposits:" << _nbDeposits <<  ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
    int p_amount;

    p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount 
        << ";deposit:" << deposit <<  ";amount:" << _amount << ";nb_deposits:" 
        << _nbDeposits << std::endl;
}

int Account::checkAmount(void) const
{
    return _amount;
}

bool Account::makeWithdrawal( int withdrawal )
{
    int p_amount;

    p_amount = _amount;
    _displayTimestamp();
    if ((checkAmount() - withdrawal) >= 0)
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount 
            << ";withdrawal:" << withdrawal <<  ";amount:" << _amount << ";nb_withdrawals:" 
            << _nbWithdrawals << std::endl;
        return (true);
    }
    else
    {
        std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount 
            << ";withdrawal:refused" << std::endl;
        return (false);
    }
}
