
int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i])
		i++;
	return (i);
}

int	verif_base(char *b)
{
	int	i;
	int	i2;

	if(ft_strlen(b) <= 1)
		return (0);
	while(b[i])
	{
		if(b[i] == '+' || b[i] == '-')
			return (0);
		while(b[i2] != '\0')
		{
			if(b[i] == b[i2])
				return (0);
			i2++;
		}
		i++;
		i2 = i + 1;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size_base;
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	while((str[i] >= 9 && str[i] <= 13)|| str[i] == 32)
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			neg *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}

	
	size_base = ft_strlen(base);
	if(verif_base(base) == 1)
	{
		if(neg < 0)
			ft_putchar('-');
		if(nb / size_base != 0)
			ft_atoi_base(nb / size_base, base);
}
