/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:05:46 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 12:05:47 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int as, char **ai)
{
	int	index;

	index = 0;
	if (as > 0)
	{
		while (ai[0][index])
		{
			write(1, &ai[0][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
