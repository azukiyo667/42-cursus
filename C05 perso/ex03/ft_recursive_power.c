/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:29 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/01 14:21:22 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	tmp;
	int	n;

	tmp = power;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	if (tmp != 0)
	{
		nb = nb * ft_recursive_power(nb, power -1);
		tmp--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_power(5, 3));
}
