#include <unistd.h>
#include <stdio.h>

// dec / 16 to get front digit of hexa
// 2nd digit if < 10 (0-9) >=10 -> 15 (A-Z)

void convert_to_hex(char in)
{
	char	front;
	//get front digit
	if (in > 16)
	{
		front = in / 16;
		write(1, &front, 1);
	}
	else
	{
		write(1, "0", 1);
	}
}

void	*ft_print_memory(void *addr)
{
	return addr;
}

int	main(void)
{
	char	a = 'o';

	convert_to_hex(a);
}
