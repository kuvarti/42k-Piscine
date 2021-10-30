/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:01:14 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:01:15 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak belirlenilen dizin sadece yazdırılabilir karakterler
//içeriyorsa 1 döndürür.
int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 32) || (str[index] > 126))
			return (0);
		index++;
	}
	return (1);
}
