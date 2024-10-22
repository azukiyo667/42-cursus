/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:03:58 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/21 14:24:03 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	find_next_word(const char *s, char c, size_t *start)
{
	while (s[*start] && s[*start] == c)
		(*start)++;
	return (*start);
}

static char	*extract_word(const char *s, char c, size_t *start)
{
	size_t	end;
	char	*word;

	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, *start, end - *start);
	*start = end;
	return (word);
}

void	ft_free_split(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[start])
	{
		find_next_word(s, c, &start);
		if (s[start])
		{
			str[i] = extract_word(s, c, &start);
			if (!str[i])
				return (ft_free_split(str), NULL);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
