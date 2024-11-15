/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:33:11 by recherra          #+#    #+#             */
/*   Updated: 2024/11/05 13:33:46 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string capitalize(std::string str)
{
	int i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return str;
}


int main(int ac, char **av)
{
	int i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (av[i])
		std::cout << capitalize(av[i++]);
	std::cout << std::endl;
} 