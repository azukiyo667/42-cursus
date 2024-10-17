/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:29 by bchevall          #+#    #+#             */
/*   Updated: 2024/07/30 12:33:41 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	tmp;
	int	n;

	tmp = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	while (tmp != power)
	{
		nb = nb * n;
		tmp++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
}
