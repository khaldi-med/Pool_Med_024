/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:06:28 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/14 18:10:17 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (nb == 0 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = power;
	result = 1;
	while (i > 0)
	{
		result *= nb;
		i--;
	}
	return (result);
}
