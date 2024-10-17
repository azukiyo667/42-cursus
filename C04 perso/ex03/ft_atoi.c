/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:59:42 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/01 13:31:35 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_atoi(char *str)
{
	int	i;
	int	resu;
	int	si;

	i = 0;
	resu = 0;
	si = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			si = si +1;
		i++;
	}
	if (si % 2 == 0)
		si = 1;
	else
		si = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu = resu * 10 + (str[i] - '0');
		i++;
	}
	return (resu * si);
}

int	main(void)
{
	char	str[] = "   	 ---123";

	printf("%d", ft_atoi(str));
	return (0);
}
