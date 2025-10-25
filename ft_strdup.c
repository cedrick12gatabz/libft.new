/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:32:25 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:32:34 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;

	len = 0;
	while (src[len])
		len++;
	result = malloc(sizeof(char ) * (len + 1));
	if (result == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		result[len] = src[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}
/*
int	main(void)
{
	const char  *orignial = "run and debug";
	char    *copy = strdup(orignial);
	int		i;

	i = 0;
	while (copy[i])
		i++;
	printf("the string created : %s\n", copy);
	printf("%c\n", copy[i - 1]);
	return 0; 
}
*/
