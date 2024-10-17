/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:19:37 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/05 16:50:57 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (max < min)
		return (NULL);
	if (min == max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main(void)
{
	int	min = -12;
	int	max = 20;
	int	i = 0;

	int *r = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d, ", r[i]);
		i++;
	}
	printf("\n");
	free(r);
}

