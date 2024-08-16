/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:17:16 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/15 14:34:10 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

void	ft_strcpy(char *d, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		size;

	size = ft_strlen(src);
	p = (char *)malloc(size + 1);
	if (p != NULL)
		ft_strcpy(p, src);
	return (p);
}
