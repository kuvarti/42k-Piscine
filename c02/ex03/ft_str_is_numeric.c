/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:00:00 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:00:00 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dizi sadece numeric karakterler içeriyorsa 1 döndürür.
int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 48 || str[index] > 57)
			return (0);
		index++;
	}
	return (1);
}
