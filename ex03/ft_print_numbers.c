#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;
	char	c;

	number = 0;
	while (number != 10)
	{
		c = number + '0';
		write(1, &c, 1);
		number = number + 1;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_numbers ();
	return (0);
}
