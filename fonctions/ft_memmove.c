/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:55:57 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/23 20:04:09 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
/*
void    *ft_memmove(void *dest, const void *src, size_t n)
{


}*/

int main() {
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);

    // Déplacer la partie "world!" de la chaîne vers la gauche
    memmove(str + 7, str + 8, strlen(str + 8) + 1);

    printf("After moving: %s\n", str);

    return 0;
}