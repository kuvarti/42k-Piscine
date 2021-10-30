/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:01:07 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:01:09 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak belirlenilen dizin sadece büyük harfli alfabetik
//karakterler içeriyorsa 1 döndürür.
int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 'Z' || str[index] < 'A')
			return (0);
		index++;
	}
	return (1);
}
