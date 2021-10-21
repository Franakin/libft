#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c && *s)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			count++;
		}
	}
	return (count);
}

static	void	free_k(char *strs, int k)
{
	while (k > 0)
	{
		free(strs);
		strs--;
		k--;
	}
}

static	void	write_split(char **strs, char const *s, char c, int wordcount)
{
	int	i;
	int	k;

	k = 0;
	while (k < wordcount)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		strs[k] = ft_substr(s, 0, i);
		if (!strs[k])
			free_k(strs[k], k);
		s += i;
		k++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		wordcount;

	if (!s)
		return (NULL);
	wordcount = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!strs)
		return (NULL);
	strs[wordcount] = 0;
	write_split(strs, s, c, wordcount);
	return (strs);
}
