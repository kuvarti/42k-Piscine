#ifndef FILEM_H
# define FILEM_H

typedef struct piivot{
	int	x;
	int	y;
	int	size;
}		t_pivot;

int		mapsize(char *buffer);
char	**rd_file(char *ism, char **map, int *size, int *ft);
void	doldur(char *buffer, char **dizi);
char	**kareyap(char **map, t_pivot pvt);
t_pivot	gezcontrol(char **map, int size);
void	temizle(char *buffer);
char	*fillbuffer(int ft, char *bfr, char *isim);
int		karekontrol(char **map, t_pivot pvt);

#endif
