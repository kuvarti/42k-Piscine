#include <unistd.h>
#include <stdlib.h>
#include "filem.h"
#include <stdio.h>

void	yazdir(char **map, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			write(1, &map[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

int	main(int as, char **ai)
{
	int		i;
	t_pivot	pvt;
	int		size;
	int		ft;
	char	**map;

	i = 1;
	while (i < as)
	{
		map = NULL;
		size = 0;
		map = rd_file(ai[i], map, &size, &ft);
		pvt = gezcontrol(map, size);
		if (pvt.size == 0)
		{
			write(1, "Error!\n", 7);
		}
		else
		{
			map = kareyap(map, pvt);
			yazdir(map, size);
		}
		free(map);
		i++;
	}
	return (0);
}
