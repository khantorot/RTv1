char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	temp = 0;
	while (little[temp])
		temp++;
	if (temp == 0)
		return ((char*)big);
	while (big[i])
	{
		while (little[j] == big[i + j] && little[j])
			j++;
		if (little[j] == '\0')
			return ((char*)big + i);
		j = 0;
		i++;
	}
	return (0);
}
