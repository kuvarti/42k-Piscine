/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:04:39 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/26 13:04:39 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	artan_index;
	int	azalan_index;
	int	rev;

	artan_index = 0;
	azalan_index = size - 1;
	while (artan_index < (size / 2))
	{
		rev = tab[azalan_index];
		tab[azalan_index] = tab[artan_index];
		tab[artan_index] = rev;
		artan_index++;
		azalan_index--;
	}
}
