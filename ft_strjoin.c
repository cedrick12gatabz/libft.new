/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:34:21 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:34:27 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlength(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlength(s1) + ft_strlength(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[len])
	{
		str[i + len] = s2[len];
		len++;
	}
	str[i + len] = '\0';
	return (str);
}
/*
int main(void)
{
    char    *str1 = "betty";
    char    *str2 = "booty";
    char    *result = ft_strjoin(str1, str2);
    printf ("string join : %s", result);
    return (0);
}
*/
