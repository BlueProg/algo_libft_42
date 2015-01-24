#include "libft.h"

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>
#define D_ERROR	{ printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

#define RANDT	512

int	main()
{
	int *tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * 5);

	tab[0] = 10;
	tab[1] = 20;
	tab[2] = 5;
	tab[3] = 8;
	tab[4] = 12;

	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	ft_sortbubble(&tab, 5);

	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("TRI 2\n");
	int *tab2; 

	i = 0;

	tab2 = (int *)malloc(sizeof(int) * 2);

	tab2[0] = 20;
	tab2[1] = 10;
	ft_sortbubble(&tab2, 2);
	while (i < 2)
	{
		printf("%d\n", tab2[i]);
		i++;
	}

	int *tab3; 
	printf("TRI 1\n");
	i = 0;
	tab3 = (int *)malloc(sizeof(int) * 1);

	tab3[0] = 10;
	ft_sortbubble(&tab3, 1);
	while (i < 1)
	{
		printf("%d\n", tab3[i]);
		i++;
	}
	return (0);
}