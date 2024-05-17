/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Country.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 07:13:40 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/17 07:39:41 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Country
{
private:
	Country();
	
public:
	Country(int id, std::string name, std::string capital);

	~Country();

	int id;
	std::string name;
	std::string capital;

};

std::ostream &operator<<(std::ostream &os, Country *elem);