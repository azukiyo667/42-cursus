/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:34:49 by bchevall          #+#    #+#             */
/*   Updated: 2024/07/23 13:46:44 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	char	str[] = "asfkjbGGse";
	int	res = 1;

	res = ft_str_is_lowercase(str);
	printf("%d\n", res);
}
