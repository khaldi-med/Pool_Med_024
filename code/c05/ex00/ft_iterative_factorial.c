/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:26:29 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/12 23:10:38 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb > 0)
	{
		result = nb;
		i = nb - 1;
		while (i > 0)
		{
			result *= (nb - i);
			i--;
		}
		return (result);
	}
	else if (nb == 0 || nb == 1)
		return (1);
	return (0);
}
