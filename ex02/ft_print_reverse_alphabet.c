#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	character;

	character = 'z';
	while (character != 96)
	{
		write(1, &character, 1);
		character = character - 1;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
