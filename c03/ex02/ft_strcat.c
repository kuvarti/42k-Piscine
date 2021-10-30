/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:09:51 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:09:52 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dest'in sonuna src'yi ekler
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	while (dest[i] != '\0')
		i++;
	d = 0;
	while (src[d] != '\0')
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}
