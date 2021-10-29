#include "filem.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	mapsize(char *buffer)//just atoi clone
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9')
	{
		a = (a * 10) + (buffer[i++] - '0');
	}
	return (a);
}

int kacrakam(char *buffer)
{
	int	s;
	int	c;

	c = 0;
	s = mapsize(buffer);
	while (s != 0)
	{
		s /= 10;
		c++;
	}
	return (c);
}

char	*fillbuffer(int ft, char *bfr, char *isim)
{
	char	str[100];
	int		maxuzunluk;

	read(ft, str, sizeof(str));
	close(ft);
	maxuzunluk = mapsize(str);
	maxuzunluk = maxuzunluk * (maxuzunluk + 2);
	bfr = NULL;
	bfr = (char *)malloc(maxuzunluk * sizeof(char));
	ft = open(isim, O_RDONLY);
	read(ft, bfr, maxuzunluk);
	close(ft);
	return(bfr);
}

char	**rd_file(char *ism, char **map, int *size, int *ft)
{
	char	*buffer;
	int		x;
	int		y;

	buffer = NULL;
	*ft = open(ism, O_RDONLY);
	if (*ft != -1)
	{
		buffer = fillbuffer(*ft, buffer, ism);
		x = mapsize(buffer);
		map = (char **)malloc(x * sizeof(char *));
		if (map == NULL)
			return (0);
		y = 0;
		while (y < x)
		{
			map[y] = (char *)malloc(x * sizeof(char));
			if (map[y] == NULL)
				return (0);
			y++;
		}
		*size = mapsize(buffer);
		doldur(buffer, map);
		free(buffer);
	}
	return (map);
}

void	doldur(char *buffer, char **dizi)
{
	int		x;
	int		y;
	int		size;
	int		i;

	size = mapsize(buffer);
	x = 0;
	i = 4 + kacrakam(buffer);
	while (x < size)
	{
		y = 0;
		while (y < size + 1)
		{
			if (buffer[i] != '\n')
			{
				dizi[x][y] = buffer[i];
			}
			y++;
			i++;
		}
		x++;
	}
}