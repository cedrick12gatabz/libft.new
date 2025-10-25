/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:26:47 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:26:53 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char) c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "betty";
	char	*result;
	
	result = ft_strchr(str, 't');
	printf("yeah, I found the letter :%s ", result);
	return (0);
}
*/
