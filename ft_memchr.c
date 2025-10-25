/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:16:57 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:17:04 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned int	i;

	i = 0;
	temp = (unsigned char *)s;
	if (s && n > 0)
	{
		while (i < n)
		{
			if (temp[i] == (unsigned char)c)
				return ((void *)(temp + i));
			else
				i++;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "betty";
	char	*result = ft_memchr(str, 't', 4);

	if (result)
		printf("found : %s", result);
	else
		printf("not found : %s", result);
	return (0);
}
*/
