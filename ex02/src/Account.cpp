/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:57:16 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/18 11:19:26 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>

/*

public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

*/

Account::Account( int initial_deposit ){
	makeDeposit(initial_deposit);
}

Account::~Account ( void ){
}

void Account::makeDeposit( int deposit ){
	
}

bool Account::makeWithdrawal( int withdrawal ){
	
}

int Account::checkAmount( void ) const {
	
}

void Account::displayStatus ( void ) const {
	
}
