#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha != 123)
	{
		write(1, &alpha, 1);
		alpha = alpha + 1;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
