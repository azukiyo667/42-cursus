/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:34:16 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/16 15:52:17 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len2;

	len = ft_strlen(src);
	len2 = ft_strlen(dst);
	i = 0;
	if (size <= len2)
		return (size + len);
	while (len2 + i < size - 1 && src[i] != '\0')
	{
		dst[len2 + i] = src[i];
		i++;
	}
	dst[len2 + i] = '\0';
	return (len + len2);
}
