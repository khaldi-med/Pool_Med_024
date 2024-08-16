/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:05:48 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/14 18:06:02 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (nb == 0 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
