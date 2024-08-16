/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:46:03 by mohkhald          #+#    #+#             */
/*   Updated: 2024/07/30 21:11:59 by mohkhald         ###   ########.fr       */
/*   Updated: 2024/07/30 20:51:16 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swp;

	swp = *a / *b;
	*b = *a % *b;
	*a = swp;
}
