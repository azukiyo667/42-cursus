/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:19:37 by bchevall          #+#    #+#             */
/*   Updated: 2024/08/05 13:44:11 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	if (src == 0)
		return (NULL);
	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == 0)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	*dup = ft_strdup("");

	if (dup != NULL)
	{
		printf("%s\n", dup);
		free(dup);
	}
	else
	{
		printf("echec\n");
	}

}

