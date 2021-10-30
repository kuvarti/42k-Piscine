/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:09:57 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:09:58 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//srcnin n karakterini dest'e ekler.
char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	sr;
	unsigned int	de;

	de = 0;
	while (dest[de] != '\0')
		de++;
	sr = 0;
	while (sr < nb && src[sr] != '\0')
	{
		dest[de + sr] = src[sr];
		sr++;
	}
	dest[de + sr] = '\0';
	return (dest);
}
