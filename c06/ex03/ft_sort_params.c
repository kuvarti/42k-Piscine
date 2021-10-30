/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:05:56 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 12:06:02 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	char	*tut;
	int		gez;
	int		d;

	d = 0;
	gez = 2;
	while (d != (size - 2))
	{
		gez = 2;
		d = 0;
		while (gez < size)
		{
			if (ft_strcmp(tab[gez], tab[gez - 1]) < 0)
			{
				tut = tab[gez];
				tab[gez] = tab[gez - 1];
				tab[gez - 1] = tut;
			}
			else
				d++;
			gez++;
		}
	}
}

int	main(int as, char **ai)
{
	int	i;
	int	a;

	if (as < 2)
		return (0);
	ft_sort_int_tab(ai, as);
	i = 1;
	while (i < as)
	{
		a = 0;
		while (ai[i][a] != '\0')
		{
			write(1, &ai[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		i++;
	}
}
