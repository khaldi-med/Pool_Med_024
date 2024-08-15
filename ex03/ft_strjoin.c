/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:10:17 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/15 18:08:59 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int		i;
	int		j;
	int		k;

	r = (char *)malloc(sizeof(strs) + 1);
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		j = 0;
		while (strs[i][j] != '\0')
		{
			r[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			r[k++] = sep[j++];
		}
		i++;
	}
	r[k] = '\0';
	return (r);
}
