/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:44:54 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/18 16:50:14 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c2;

	c2 = (unsigned char)(c);
	str = (unsigned char *)(s);
	i = 0;
	while (i < n)
	{
		if (str[i] == c2)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
