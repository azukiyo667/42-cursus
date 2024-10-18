/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:33:48 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/18 13:05:54 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)(s1);
	dst = (unsigned char *)(s2);
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && src[i] == dst[i])
	{
		i++;
	}
	return (src[i] - dst[i]);
}
