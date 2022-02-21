/*
** The ft_strsplit() function allocates (with malloc(3)) and returns
** an array of "fresh" null-terminated strings (and the array will
** be null-terminated too) resulting from the splitting of the string
** passed as a parameter based on the character c. If the allocation
** fails, the function returns NULL.
*/

#include <stdlib.h>

char	**ft_strsplit(char *str, char sep);
int		word_counter(char *str, char sep);
int		ft_isseparator(char c, char sep);
void	word_writer(char *dest, char *from, char sep);
void	write_split(char **split, char *str, char sep);

char	**ft_strsplit(char *str, char sep)
{
	char	**res;
	int		words;

	words = word_counter(str, sep);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = "\0";
	write_split(res, str, sep);
	return (res);
}

int	word_counter(char *str, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isseparator(str[i + 1], sep) == 1
			&& ft_isseparator(str[i], sep) == 0)
			words++;
		i++;
	}
	return (words);
}

int	ft_isseparator(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	else
		return (0);
}

void	write_split(char **split, char *str, char sep)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isseparator(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_isseparator(str[i + j], sep) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			word_writer(split[word], str + i, sep);
			i += j;
			word++;
		}
	}
}

void	word_writer(char *dest, char *from, char sep)
{
	int	i;

	i = 0;
	while (ft_isseparator(from[i], sep) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}
