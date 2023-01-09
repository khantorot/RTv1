char	*ft_strcapitalize(char *str)
{
	unsigned char a;

	a = 0;
	while (str[a])
	{
		while ((str[a] < 'a' || str[a] > 'z') && (str[a] < 'A' || str[a] > 'Z')
				&& (str[a] < '0' || str[a] > '9'))
			a++;
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
			a++;
		}
		else
			a++;
		while ((str[a] >= 'a' && str[a] <= 'z')
				|| (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if (str[a] >= 'A' && str[a] <= 'Z')
				str[a] = str[a] + 32;
			else
				a++;
		}
	}
	return (str);
}
