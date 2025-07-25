// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {

public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void ); //imprime info total + timestamp

	Account( int initial_deposit ); //Account a1(100); Crea una cuenta con 100
	~Account( void );

	void	makeDeposit( int deposit ); // suma dinero y actualiza contadores
	bool	makeWithdrawal( int withdrawal ); // intenta restar dinero, devuelve true o false
	int		checkAmount( void ) const; //devuelve _amount
	void	displayStatus( void ) const; // imprime estado de la cuenta actual (index, amount, depósitos, etc.)


private:
	//en log total:
	static int	_nbAccounts; //accounts - Dentro de un método de la clase (como el constructor), sí puedes modificarlo
	static int	_totalAmount; //total -> inicializar en el cpp
	static int	_totalNbDeposits; //depositss
	static int	_totalNbWithdrawals; //withdrawals

	static void	_displayTimestamp( void ); //NO, porq devuelve void: std::cout << _displayTimestamp()
	// genera el [YYYYMMDD_HHMMSS]

	//individual:
	int				_accountIndex; //index:
	int				_amount; //amount
	int				_nbDeposits; // nb_deposits: o deposits:
	int				_nbWithdrawals; //nb_withdrawals: o withdrawals:
								//p_amount (previous ammount)
								//antes del depósito/retiro. 
								//Se calcula y muestra, pero no se guarda.

	Account( void ); //Account a2;  Crea una cuenta con constructor vacío
	//pero es privado con lo cual no se puede usar fuera de la clase
	//nadie puede crear un Account sin darle un deposito inicial
};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
