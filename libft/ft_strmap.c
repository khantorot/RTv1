#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*str;
	int		i;
	int		j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		str = (char *)malloc(j + 1 * sizeof(*str));
		if (str == (NULL))
			return (NULL);
		while (s[i] != 0)
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
