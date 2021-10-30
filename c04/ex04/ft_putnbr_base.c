/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:26:21 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:26:22 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_Check(char *b);

void	writestr(char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &b[i], 1);
		i--;
	}
}

int	base_check(char *c)
{
	int	i;
	int	gez;

	i = 0;
	while (c[i] != '\0')
	{
		gez = i;
		while (c[gez] != '\0')
		{
			if (c[gez] == c[gez + 1])
				return (0);
			gez++;
		}
		if (c[i] == '+' || c[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		i;
	char	c;
	char	*dest;

	dest = 0;
	i = 0;
	size = base_check(base);
	if (size > 0)
	{
		if (nbr < size)
		{
			c = base[nbr];
			write(1, &c, 1);
			nbr = 0;
		}
		while (nbr != 0)
		{
			c = nbr % size;
			nbr /= size;
			dest[i++] = base[c];
		}
		dest[i] = '\0';
	}
	writestr(dest);
}
