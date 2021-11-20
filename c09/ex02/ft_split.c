/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:11:04 by aeryilma          #+#    #+#             */
/*   Updated: 2021/11/20 19:11:04 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_find_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_count_numb_of_word(char *str, char *charset)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_find_sep(str[i + 1], charset) == 1
				&& (ft_find_sep(str[i], charset) == 0)))
			word++;
		i++;
	}
	return (word);
}

void	ft_copy_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (ft_find_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_transfert_to_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (ft_find_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_find_sep(str[i + j], charset) == 0)
				j++;
			tab[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_copy_word(tab[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;

	word = ft_count_numb_of_word(str, charset);
	tab = (char **)malloc(sizeof(char *) * (word + 1));
	tab[word] = 0;
	ft_transfert_to_tab(tab, str, charset);
	return (tab);
}
