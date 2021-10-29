#include "filem.h"

int	karekontrol(char **map, t_pivot pvt)
{
	int	x;
	int	y;

	x = pvt.x;
	while (x < (pvt.x + pvt.size))
	{
		y = pvt.y;
		while (y < (pvt.y + pvt.size))
		{
			if (map[x][y] == 'o')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

t_pivot	gezcontrol(char **map, int size)
{
	t_pivot	pvt;

	pvt.size = size;
	size++;
	while (pvt.size != 0)
	{
		pvt.x = 0;
		while ((pvt.x + pvt.size) < size)
		{
			pvt.y = 0;
			while ((pvt.y + pvt.size) < size)
			{
				if (karekontrol(map, pvt) == 1)
					return (pvt);
				pvt.y++;
			}
			pvt.x++;
		}
		pvt.size--;
	}
	pvt.x = 0;
	pvt.y = 0;
	pvt.size = 0;
	return (pvt);
}

char	**kareyap(char **map, t_pivot pvt)
{
	int	x;
	int	y;

	x = pvt.x;
	while ((x - pvt.x) < pvt.size)
	{
		y = pvt.y;
		while ((y - pvt.y) < pvt.size)
		{
			map[x][y] = 'x';
			y++;
		}
		x++;
	}
	return (map);
}
