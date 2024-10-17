/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:08:01 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/01 12:10:04 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str + i, 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (i < 1)
			ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
