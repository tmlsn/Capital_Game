/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 07:21:06 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/17 09:37:04 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

std::vector<Country> init_data(std::string path)
{
	int i = 0;
	std::vector<Country> ret;

	std::vector<std::string> ctry;
	std::ifstream file(path.c_str());
	std::string line;
	while(getline(file, line))
	{
		//std::cout << "############# LINE #############" << line << std::endl;
		std::stringstream streamline(line);
		std::string info;
		while (getline(streamline, info, ','))
		{
			ctry.push_back(info);
			//std::cout << "############# INFO #############" << info << std::endl;
			
		}
		//std::cout << "name : " << ctry[0] << std::endl << "capital : " << ctry[5] << std::endl;
		std::cout << "Downloading ... " << i * 100 / 197 << "% \r";
		ret.push_back(Country(i, ctry[0], ctry[5]));
		i++;
		ctry.clear();
	}
	std::cout << std::endl;
	return (ret);
}

void game_test(std::vector<Country> countries)
{
	int seed = rand() % 196 + 1;
	std::string ans;
	std::cout << "What is the capital of " << countries[seed].name << std::endl;
	getline(std::cin, ans);
	if (ans != countries[seed].capital)
		{std::cout << "\r False ! " << ans << " is not the capital of " << countries[seed].name << ", the correct answer is : " << countries[seed].capital << std::endl;}
	else
		{std::cout << "\r Correct ! " << ans << " is well the capital of " << countries[seed].name << std::endl;} 
}

void select_game(std::vector<Country> countries)
{
	game_test(countries);
}

void game()
{
	std::vector<Country> countries = init_data("../data/liste-197-etats-2020.csv");
	while (1)
	{
		system("clear");
		select_game(countries);
	}
}