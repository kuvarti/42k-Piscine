/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:09:44 by aeryilma          #+#    #+#             */
/*   Updated: 2021/10/30 11:09:49 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dizilerin n karakterini karşılaştırır.
//ilk n karakter aynı ise 0 döner;
//s1 büyükse >0 döner
//s2 büyükse <0 döner
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
