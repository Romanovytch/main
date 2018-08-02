#include <stdio.h>

void	ft_is_negative(int n);

int main()
{
	printf("Testing 0, expecting P :\n");
	ft_is_negative(0);
	printf("\nTesting 42, expecting P :\n");
	ft_is_negative(42);
	printf("\nTesting -42, expecting N :\n");
	ft_is_negative(-42);
	printf("\n");
	return 0;
}
