/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:45:01 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/15 17:49:56 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = min - max;
	*range = malloc(sizeof(int) * size);
	i = -1;
	if ((*range) != NULL)
	{
		i = 0;
		while (i < size)
		{
			(*range)[i] = i;
			i++;
		}
	}
	return (i);
}
