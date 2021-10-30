/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:00:22 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:01:22 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak belirlenilen dizin sadece küçük harfli alfabetik 
//karakterler içeriyorsa 1, herhangi başka bir karakter içeriyorsa 
//0 sonucunu veren bir fonksiyon.
int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 'z' || str[index] < 'a')
			return (0);
		index++;
	}
	return (1);
}
