/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:01:42 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:01:43 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bütün kelimelerin ilk harfini büyük harf yapan ve kalan harflerin
//hepsini küçük harfe dönüştüren bir fonksiyon
int	kontrol(char c)
{
	if (!(c < '0' || c > 'z'))
		if (!(c > '9' && c < 'A'))
			if (!(c > 'Z' && c < 'a'))
				return (1);
	return (0);
}

char	buyukyaz(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	kucukyaz(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (kontrol(str[index]) == 1)
		{
			str[index] = buyukyaz(str[index]);
			index++;
			while (kontrol(str[index]) == 1)
			{
				str[index] = kucukyaz(str[index]);
				index++;
			}
		}
		index++;
	}
	return (str);
}
