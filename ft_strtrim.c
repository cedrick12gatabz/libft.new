/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:42:51 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:42:56 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	while (len && ft_strchr(set, *s1))
	{
		--len;
		++s1;
	}
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, len);
	new_str[len] = '\0';
	return (new_str);
}
/*
int	main()
{
	char	*str1 = "+++ helo World";
	char	*call = ft_strtrim(str1, "+-");
	printf ("trimed string : %s", call);
	return (0);
}
*/
