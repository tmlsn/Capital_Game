/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Country.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 07:16:59 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/17 08:16:22 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Country.hpp"


Country::Country()
{
}

Country::Country(int id, std::string name, std::string capital) : id(id), name(name), capital(capital) {};

std::ostream &operator<<(std::ostream &os, Country *elem)
{
	os << elem->capital << " is the Capital of " << elem->name << "." << std::endl;
	return (os);
};

Country::~Country()
{
}