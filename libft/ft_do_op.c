#include "libft.h"

int		ft_do_op(int argc, char **argv)
{
	int		s1;
	int		s2;
	int		op;

	if (argc - 1 != 3)
		write(1, "\n", 1);
	else
	{
		s1 = ft_atoi(argv[1]);
		s2 = ft_atoi(argv[3]);
		if (argv[2][0] == '+')
			op = (s1 + s2);
		if (argv[2][0] == '-')
			op = (s1 - s2);
		if (argv[2][0] == '%')
			op = (s1 % s2);
		if (argv[2][0] == '*')
			op = (s1 * s2);
		if (argv[2][0] == '/')
			op = (s1 / s2);
		ft_putnbr(op);
		write(1, "\n", 1);
	}
}
