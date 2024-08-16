/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:52:56 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/11 16:13:25 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_is_the_same(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_base(char *str)
{
	int	bs_len;

	bs_len = ft_strlen(str);
	if (bs_len <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_b;
	unsigned int	n;

	if (ft_is_base(base) && ft_is_the_same(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		len_b = ft_strlen(base);
		if (n >= len_b)
			ft_putnbr_base((int)(n / len_b), base);
		ft_putchar(base[n % len_b]);
	}
}
