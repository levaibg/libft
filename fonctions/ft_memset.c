/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:25:43 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/24 12:08:16 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    i = 0;
    while(i < n)
    {
        ((unsigned char*)s)[i] = (unsigned char)c;
        i++;
    }
    return(s);
}

int main() {
    int array[10];
    int barray[10];
    
    memset(array, 'f' , sizeof(array));
    for (int i = 0; i < 10; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    ft_memset(barray, 'o' , sizeof(barray));
     for (int j = 0; j < 10; j++) {
        printf("%c", barray[j]);
    }

    
    return 0;
}