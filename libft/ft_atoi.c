#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int nbr;

    i = 0;
    sign = 1;
    nbr = 0;

    while (str[i] == '\t' || str[i] == '\r' || str[i] == ' ' || str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
        ++i;

    while ((str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }

    return (sign * nbr);
}
