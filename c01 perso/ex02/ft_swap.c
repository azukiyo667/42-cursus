/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:57:36 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/01 13:09:38 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

int	main(void)
{
	int	a = 42;
	int	b = 21;

	printf("Avant: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres: a = %d, b = %d\n", a, b);
}
