void    ft_putchar(char c);

void    rush01(int y, int x)
{
    int xsay;
    int ysay;

    x--;
    y--;
    xsay = 0;
    while (xsay < x + 1)
    {
        ysay = 0;
        while (ysay < y + 1)
        {
            if ((xsay == 0 && ysay == 0) || (xsay == x && ysay == y
                && xsay != 0 && ysay != 0))
                ft_putchar('/');
            else if((xsay == 0 && ysay == y) || (xsay == x && ysay == 0))
                ft_putchar('\\');
            else if(xsay == 0 || ysay == 0 || ysay == y || xsay == x)
                ft_putchar('*');
            else
                ft_putchar(' ');
            ysay++;
        }
        xsay++;
        ft_putchar('\n');
    }
}