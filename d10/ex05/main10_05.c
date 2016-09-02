#include <stdio.h>

int	ft_subtract(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

int main()
{
	int	tab[7] = {1, 2, 3, 4, 5, 6, 7};
	int tab2[7] = {7, 6, 5, 4, 3, 2, 1};
	int (*ptr)(int, int);

	ptr = &ft_subtract;

	printf("%d\n", ft_is_sort(tab, 7, ptr));
	printf("%d\n", ft_is_sort(tab2, 7, ptr));
}
