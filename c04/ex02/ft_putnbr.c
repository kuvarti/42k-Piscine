/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:24:31 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:25:08 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//gönderilen integer tipindeki değeri yazdırır
#include <unistd.h>

void	yaz(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		yaz('-');
		yaz('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		yaz('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	yaz((nb % 10) + '0');
}
