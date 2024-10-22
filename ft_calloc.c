/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:59:04 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/19 20:26:34 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;
	size_t	overflow;

	overflow = nmemb * size;
	if (!nmemb || !size || overflow / nmemb != size)
		return (malloc(0));
	buffer = malloc(overflow);
	if (!buffer)
		return (NULL);
	ft_memset(buffer, 0, overflow);
	return (buffer);
}
