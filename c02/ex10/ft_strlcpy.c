/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:01:47 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:01:48 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strcpynin daha "güvenli" versiyonu:
//src'den dest'e size -1 karakter kopyalıyor. \0 koymuyor.
//dest length ini döndürüyor
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}
