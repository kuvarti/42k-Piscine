/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:04:43 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/26 13:04:44 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tut;
	int	gez;
	int	d;

	d = 0;
	gez = 1;
	while (d != (size - 1))
	{
		gez = 1;
		d = 0;
		while (gez < size)
		{
			if (tab[gez] < tab[gez - 1])
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
