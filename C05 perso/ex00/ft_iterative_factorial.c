/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:29 by bchevall          #+#    #+#             */
/*   Updated: 2024/07/29 18:43:57 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb -1;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (tmp != 1)
	{
		nb = nb * tmp;
		tmp--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
}
