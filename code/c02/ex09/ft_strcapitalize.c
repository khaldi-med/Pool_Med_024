/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhald <mohkhald@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:29:13 by mohkhald          #+#    #+#             */
/*   Updated: 2024/08/04 11:32:45 by mohkhald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_downcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalphanumeric(char c)
{
	if (ft_numeric(c) || ft_downcase(c) || ft_upcase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !ft_isalphanumeric(str[i - 1]))
		{
			if (ft_downcase(str[i]))
				str[i] -= 32;
		}
		else if (ft_upcase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
