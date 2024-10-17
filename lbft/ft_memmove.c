/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:58:49 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/17 11:15:39 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	str = (char *)(src);
	str2 = (char *)(dest);
	if ((!src && !dest) || str == str2 || n == 0)
		return (dest);
	if (str2 > str)
	{
		i = n + 1;
		while (--i > 0)
			str2[i - 1] = str[i - 1];
	}
	else
	{
		i = -1;
		while (++i < n)
			str2[i] = str[i];
	}
	return (dest);
}
