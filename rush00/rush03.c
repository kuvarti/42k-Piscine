void    ft_putchar(char c);

void    rush03(int y, int x)
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
            if ((ysay == 0 && xsay == 0) || (ysay == 0 && xsay == x))
                ft_putchar('A');
            else if((ysay == y && xsay == 0) || (ysay == y && xsay == x))
                ft_putchar('C');
            else if(xsay == 0 || ysay == 0 || ysay == y || xsay == x)
                ft_putchar('B');
            else
                ft_putchar(' ');
            ysay++;
        }
        xsay++;
        ft_putchar('\n');
    }
}