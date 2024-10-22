/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:05:12 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/21 18:20:08 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*buffer;
	unsigned int	num;
	int				len;

	len = ft_len(n);
	buffer = ft_calloc(len + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (n < 0)
	{
		num = -n;
		buffer[0] = '-';
	}
	else
		num = n;
	while (num > 0)
	{
		buffer[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		buffer[0] = '0';
	return (buffer);
}
