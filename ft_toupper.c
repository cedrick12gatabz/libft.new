/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:45:23 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:45:29 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	else
		return (c);
}
/*
int	main(void)
{
	int	i;
	char    str[] = "betty";
	char	*result = malloc(strlen(str) + 1);

	i = 0;
	while (str[i])
	{
		result[i] = (char) ft_toupper((unsigned char)str[i]);
		i++;
	}
	result[i] = '\0';
	printf("to upper case: %s ", result);
	free(result);
	return (0);	
}
*/
