/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:44:19 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/24 12:05:27 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

 void *ft_memcpy(void *dest, const void *src, size_t n)
 {
   size_t   i;

   i = 0;
   char *char_dest = (char *) dest;
   char *char_src = (char *) src;

   while(i < n)
   {
      char_dest[i]= char_src[i];
      i++;
   }
   return dest;    
}

 int    main(void)
 {
    char src[]= "COPIER CELA";
    char dest[100];
    
    memcpy(dest, src, strlen(src)+1);

    printf("src :  %s\n",src);
    
    char src2[]= "copier this";
    char dest2[42];

    ft_memcpy(dest2, src2, strlen(src2)+1);

    printf("ma version src : %s\n",src2);
 
     return 0;
 }