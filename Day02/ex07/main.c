#include <stdio.h>

void  ft_print_combn(int);

int main()
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		printf("Testing n=%d :\n", i);
  		ft_print_combn(i);
		printf("\n");
		i++;
	}
}
