/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgatabaz <cgatabaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:44:34 by cgatabaz          #+#    #+#             */
/*   Updated: 2025/10/25 04:44:39 by cgatabaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int     main(void)
{
        int     i;
        char    str[] = "Betty";
        char    *result = malloc(strlen(str) + 1);

        i = 0;
        while (str[i])
        {
                result[i] = (char) ft_tolower((unsigned char)str[i]);
                i++;
        }
        result[i] = '\0';
        printf("to lower case: %s ", result);
        free(result);
        return (0);
}
*/
