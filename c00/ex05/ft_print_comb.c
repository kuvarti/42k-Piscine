/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:58:36 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/26 12:58:38 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	bir;
	char	iki;
	char	uc;

	bir = '0';
	while (bir <= '7')
	{
		iki = bir + 1;
		while (iki <= '8')
		{
			uc = iki + 1;
			while (uc <= '9')
			{
				write(1, &bir, 1);
				write(1, &iki, 1);
				write(1, &uc, 1);
				if (bir != '7' || iki != '8' || uc != '9')
					write(1, ", ", 2);
				uc++;
			}
			iki++;
		}
		bir++;
	}
}
