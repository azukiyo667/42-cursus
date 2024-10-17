/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:09:55 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/16 12:49:36 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	if (!src && !dest)
		return (0);
	i = 0;
	str = (unsigned char *)(src);
	str2 = (unsigned char *)(dest);
	while (i < n)
	{
		str2[i] = str[i];
		i++;
	}
	return (dest);
}
