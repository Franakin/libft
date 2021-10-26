#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	ret[i] = 0;
	i--;
	while (i >= 0)
	{
		ret[i] = f(i, str[i]);
		i--;
	}
	return (ret);
}
