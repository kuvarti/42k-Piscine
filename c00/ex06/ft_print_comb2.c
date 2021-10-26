/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:58:43 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/26 12:58:44 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writeint(int yaz)
{
	if (yaz > 9)
		ft_writeint(yaz / 10);
	ft_putchar((yaz % 10) + '0');
}

void	yaz(int ik, int br)
{
	if (ik < 10)
		ft_putchar('0');
	ft_writeint(ik);
	ft_putchar(' ');
	if (br < 10)
		ft_putchar('0');
	ft_writeint(br);
	if (!(ik == 98 && br == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	br;
	int	ik;

	ik = 0;
	while (ik < 99)
	{
		br = ik + 1;
		while (br < 100)
		{
			if (ik != br)
			{
				yaz(ik, br);
			}
			br++;
		}
		ik++;
	}
}
