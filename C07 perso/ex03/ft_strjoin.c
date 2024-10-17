/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:26:45 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/06 14:36:37 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_strcat(char **strs, char *r, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			r[k++] = strs[i][j++];
		if (i < size - 1)
		{
			l = 0;
			while (sep[l] != '\0')
			{
				r[k++] = sep[l++];
			}
		}
		i++;
	}
	r[k] = '\0';
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int		lensep;
	int		lenstrs;
	int		lentotal;

	if (size == 0)
	{
		r = (char *)malloc(1);
		if (r)
			r[0] = '\0';
		return (r);
	}
	lenstrs = ft_strslen(strs, size);
	lensep = ft_strlen(sep);
	lentotal = lenstrs + (lensep * (size - 1)) + 1;
	r = (char *)malloc(sizeof(char) * lentotal);
	if (!r)
		return (NULL);
	r = ft_strcat(strs, r, sep, size);
	return (r);
}

int	main(void)
{
	char	*sep = " ,";
	int		size = 4;
	char 	*strs[] = {"Bonjour", "Tout", "Le", "Monde"};
	char 	*resultat;

	resultat = ft_strjoin(size, strs, sep);
	if (resultat)
	{
		printf("%s\n", resultat);
		free(resultat);
	}
	return (0);
}

