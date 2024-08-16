/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:51:11 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/12 22:29:31 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swp(char **s, char **t)
{
	char	*swp;

	swp = *s;
	*s = *t;
	*t = swp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			j = i + 1;
			while (j <= ac - 1)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swp(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		j = 1;
		while (j < ac)
		{
			ft_putstr(av[j++]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
