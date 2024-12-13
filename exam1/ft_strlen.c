int	ft_strlen(char *str)
{
	if (!str)
		return (0);

	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
