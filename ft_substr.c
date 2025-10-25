/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:43:41 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:43:47 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*new_str;

	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}

/*
int main()
{
    char    *str = "100-456-abc";

    char    *result = ft_substr(str, 3, 6);
    printf ("the new created string is : %s", result);
    return (0);
}
*/
