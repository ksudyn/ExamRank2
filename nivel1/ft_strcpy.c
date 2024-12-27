char	*ft_strcpy(char *s1, char *s2)
{
	if (!s1 || !s2)
	{
		return ('\0');
	}
	
	int i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
//COMPROBADO
