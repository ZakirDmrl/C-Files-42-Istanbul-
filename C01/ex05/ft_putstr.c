#include <unistd.h>

void ft_putstr(char *str)
{
    char c;
    int i;

    c = *str;
    i = 0;
    while (c != '\0')
    {
        c = *(str + i);
        write(1, &c, 1);
        i++;
    }
}
