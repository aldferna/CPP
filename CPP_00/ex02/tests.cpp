// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

//usao de la STL
#include <vector> //similar a un array dinamico en C
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t; //cuentas
	//accounts_t es un vector de objetos Account::t (typedef del objeto account)
	//std::vector<int> v = {10, 20, 30} -> esto seria un vector de ints (v[0] = 10)
	typedef std::vector<int>								  ints_t; //depositos y retiradas
	//ints_t es un vector de ints
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; 
	//es un par de iteradores: para el vector de cuentas y el de enteros
	//los vectores pueden recorrerse cono arrays (v[i] o con iters v.begin v.end)


//prepara datos
//accounts_t + iterador

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	//array de cantidades
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	//cantidad de elementos en el array
	accounts_t				accounts( amounts, amounts + amounts_size );
	//declaracion del vector
	//accounts en un *constructor* del vector q creá el vector copiando desde ptr begin -> end (no inclusive)
	//(amounts apunta a inicio/ + el num de amounts que tengo, apunta a fin array)
	//convierte cada int de amounts[] en un Account::t 
	//esto solo puede hacerse si Account::t tiene un constructor qe acepta un int
	//cada int del array se pasa al constructor del objeto Account::t para crear los elems del vector
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();
	//en vez de punteros se usan iteradores para recorrer vectores

//ints_t + iterador

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	//esto se repite como en el bloque anterior, pero es depósitos a realizar
	//esto pero, es un vector de ints, no de Account::t; si usa un constructor
	//pero no necesita un constructor personalizado
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	//y aqui lo mismo, pero retiros a realizar
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();



//acciones
//acc_int_t (typedef iterador - ahora si en pares)

	Account::displayAccountsInfos();
	//metodo (funcion en clase) que muestra info global de todas la cuentas
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	//for_each aplica displaystatus a cada cuenta individual

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
		//it->first->makeDeposit(*it->second);
	}
	//for(inicializas 2 iter, mientras q no llegue al final, itera)
	//it.first apunta a cuenta, it.second al deposito -> la funcion suma valor a la cuenta

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	//igual pero con retirada, resta 2 a 1

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
