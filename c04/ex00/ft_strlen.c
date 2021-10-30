/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:21:50 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:24:13 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//str'nin uzunluğunu verir
int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}