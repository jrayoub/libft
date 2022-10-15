/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:40:10 by aaitouna          #+#    #+#             */
/*   Updated: 2022/10/14 14:40:12 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_converter(char *s, long int n, int index)
{
	if (n >= 10)
		ft_converter(s, n / 10, index - 1);
	s[index] = '0' + n % 10;
}

long int	ft_abs(long int v)
{
	if (v < 0)
		return (v * -1);
	return (v);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
 *
 * @param n {Int} the integer to convert.
 * @return {Char *} The string representing the integer.
NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	long int	num_counter;
	long int	nc;
	int			buff;
	char		*str;

	buff = 0;
	if (n < 0)
	{
		num_counter = (long)n * -1;
		buff++;
	}
	else
		num_counter = n;
	nc = num_counter;
	while (num_counter >= 10)
	{
		num_counter /= 10;
		buff++;
	}
	buff++;
	str = (char *)malloc((sizeof(char) * buff) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	ft_converter(str, nc, buff - 1);
	str[buff] = '\0';
	return (str);
}
