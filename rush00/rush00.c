void    ft_putchar(char c);

void    rush00(int x, int y)
{
    int xsay;
    int ysay;

    x--;
    y--;
    ysay = 0;
    while (ysay < y + 1)
    {
        xsay = 0;
        while (xsay < x + 1)
        {
            if ((ysay == 0 && xsay == 0) || (ysay == 0 && xsay == x)
                || (ysay == y && xsay == 0) || (ysay == y && xsay == x))
                ft_putchar('o');
            else if (xsay == x || xsay == 0) 
                ft_putchar('|');
            else if (ysay == y || ysay == 0)
                ft_putchar('-');
            else
                ft_putchar(' ');
            xsay++;
        }
        ysay++;
        ft_putchar('\n');
    }
}