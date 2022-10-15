/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:09:18 by aaitouna          #+#    #+#             */
/*   Updated: 2022/10/14 16:09:19 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	int				j;
	size_t			ci;
	int				llen;

	i = 0;
	j = 0;
	if (big == NULL || little == NULL)
		return (NULL);
	llen = ft_strlen(little);
	if (!little[j])
		return ((char *)big);
	while (big[i] && i < len)
	{
		ci = i;
		j = 0;
		while (little[j] && big[ci] == little[j])
		{
			if (j == llen - 1 && ci < len)
				return ((char *)&big[i]);
			ci++;
			j++;
		}
		i++;
	}
	return (NULL);
}
