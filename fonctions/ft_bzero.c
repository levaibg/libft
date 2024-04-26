/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:47:16 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/26 11:22:37 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char	*i;

	i = s;
	while (n)
	{
		*i = 0;	
		i++ ;
		n--;
	}
}
#include <stdio.h>
#include <string.h>

/*

int main(void)
{
    char str[10] = "Bonjour";

    printf("Avant bzero : %s\n", str);

    ft_bzero(str, 4);

    printf("Après bzero : %s\n", str);

    return 0;
}*/
