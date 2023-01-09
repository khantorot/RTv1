#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr_s1;
	unsigned char *ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n > 0 && *ptr_s1 == *ptr_s2)
	{
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*ptr_s1 - *ptr_s2);
}
