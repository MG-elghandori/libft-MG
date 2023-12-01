/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-gha <moel-gha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:05:43 by moel-gha          #+#    #+#             */
/*   Updated: 2023/11/26 16:07:16 by moel-gha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[j])
	{
		if (s[j] == c)
			i = j + 1;
		else if (s[j + 1] == c || s[j + 1] == '\0')
		{
			result[word] = malloc(sizeof(char) * (j - i + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + i), j - i + 2);
			word++;
		}
		j++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (split_words(result, s, c, 0))
		return (result);
	return (NULL);
}
