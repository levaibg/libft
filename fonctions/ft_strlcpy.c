/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:59:51 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/26 11:34:39 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char dest, const char src, size_t destsize)
{
    size_t i;
    size_t size;

    i = 0;
    size = ft_strlen(src);
    if (dest[i] == '\0' || src[i] == '\0')
        return (0);
    if (destsize != 0) 
    {
        while (src[i] != '\0' && i < (destsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (size);
}