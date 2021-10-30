/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:25:25 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:25:41 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strnin içinde gelen sayıyı integer tipinde verir.
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	result;

	c = 0;
	sign = 1;
	result = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
	{
		c++;
	}
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = (str[c] - '0') + (result * 10);
		c++;
	}
	return (result * sign);
}
