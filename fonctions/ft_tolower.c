/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:39:23 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/25 15:40:23 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int ft_tolower(int c)
 {
    if(c >= 65 && c <= 90)
        c +=  32;
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