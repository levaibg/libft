/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:54:59 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/25 15:38:59 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include<stdio.h>

int	ft_toupper(int c)
 {
    if(c >= 97 && c <= 122)
        c -=  32;
    return (c);
 }
/*
 int    main(void)
 {
    char care;
    care = 'g';
    care = toupper(care);
    printf("%c",care);
    char ff;
    ff = 'f';
    ff = ft_toupper(ff);
    printf("%c",ff);
   
    return 0;


 }*/
