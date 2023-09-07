/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:59:24 by inunez-g          #+#    #+#             */
/*   Updated: 2022/12/26 17:35:58 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
    time_t timing;
    struct tm * mytime;

    time(&timing);
    mytime = localtime(&timing);
    std::cout << "[" << mytime->tm_year + 1900 << mytime->tm_mon + 1 << mytime->tm_mday << "_" << mytime->tm_hour << mytime->tm_min;
    if (mytime->tm_sec < 10)
        std::cout << "0" << mytime->tm_sec << "]" << " ";
    else
        std::cout << mytime->tm_sec << "]" << " ";
    return ;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const
{
    return (_amount);
}

Account::Account( int initial_deposit )
{
    static int i = 0;
    
    _displayTimestamp();
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _accountIndex = i;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    i++;
    _nbAccounts++;
    return ;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    return ; 
}

void    Account::makeDeposit(int deposit)
{
    if (deposit > 0)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
        _amount += deposit;
        _totalAmount += deposit;
        _nbDeposits++;
        _totalNbDeposits++;
        std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    }
    return;        
}


bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (checkAmount() < withdrawal)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (1);
    }
    else
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (0);
    }
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
    return ;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    return ;
}