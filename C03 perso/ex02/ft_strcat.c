/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:48:21 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/01 13:26:37 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0')
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	dest [i + i2] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "test1";
	char	src[] = "test2";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
