/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:56:18 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/11 13:02:54 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(){
}

Contact::~Contact(){
}

void Contact::set_first_name(std::string str){
	first_name = str;
}

void Contact::set_last_name(std::string str){
	last_name = str;
}

void Contact::set_nickname(std::string str){
	nickname = str;
}

void Contact::set_number(std::string str){
	number = str;
}

void Contact::set_darkest_secret(std::string str){
	darkest_secret = str;
}

std::string Contact::get_first_name(){
	return first_name;
}

std::string Contact::get_last_name(){
	return last_name;
}

std::string Contact::get_nickname(){
	return nickname;
}

std::string Contact::get_number(){
	return number;
}

std::string Contact::get_darkest_secret(){
	return darkest_secret;
}
