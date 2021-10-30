/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:09:34 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:09:34 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dizileri karşılaştırıyor. return degeri;
//<0 ise str1 bellek içeriği str2 bellek içeriğinden küçüktür.
//>0 ise str2 bellek içeriği str1 bellek içeriğinden küçüktür.
//=0 ise str1 bellek içeriği str2 bellek içeriğine eşittir.
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
