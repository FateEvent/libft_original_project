#include <stdio.h>



int	main()
{
	int len;
	len = sizeof(int) * 4;
	int tab[] = {1, 4, 6, 7};
	int dest[] = {5, 6, 7, 8};
	ft_memmove(tab, dest, len);
	for(int i = 0; i < 4; i++)
		printf("%d", tab[i]);
}
