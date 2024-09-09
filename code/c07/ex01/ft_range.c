/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:09:58 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/15 14:43:50 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_int;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = min - max;
	array_int = malloc(sizeof(int) * size);
	if (array_int == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array_int[i] = i + min;
		i++;
	}
	return (array_int);
}
