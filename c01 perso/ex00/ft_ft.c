/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:28:01 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/01 13:07:06 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	nbr;

	ft_ft(&nbr);
	printf("%d", nbr);
	return (0);
}
