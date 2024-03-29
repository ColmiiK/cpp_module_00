/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:28:21 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/11 12:11:17 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <iostream>
#include <string>

int main(){
	
	PhoneBook pb;
	std::string str;
	
	while (str != "EXIT"){
		std::cout << "Enter a command: ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str != "EXIT")
			std::cout << "Invalid command, please try again" << std::endl;
	}
	return 0;
}
