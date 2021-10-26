/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:58:25 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/26 12:58:26 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthcar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	nmr;

	nmr = 48;
	while (nmr <= 57)
	{
		write(1, &nmr, 1);
		nmr++;
	}
}
