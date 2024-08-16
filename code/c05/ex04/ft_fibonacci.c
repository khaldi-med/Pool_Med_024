/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:54:31 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/13 23:03:16 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
