#include "libft.h"
void ft_bzero(void *ptr, size_t n)
{
	unsigned char *s;

	s = (unsigned char *)ptr;
	while (n != 0)
	{
		*s = 0;
		s++;
		n--;
	}
}
/*
** Test
#include <stdio.h>

int main(void)
{
	char buffer[] = "Hello";
	ft_bzero(buffer, (sizeof(buffer) - 1));
	printf("%s\n", buffer);
	return (0);
}
*/