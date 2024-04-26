/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:45:59 by lloginov          #+#    #+#             */
/*   Updated: 2024/04/26 11:16:12 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	i = 0;
	
	unsigned const char *char_s1;
	unsigned const char *char_s2;

	char_s1 = (unsigned const char *)s1;
	char_s2 = (unsigned const char *)s2;			
	if(char_s1 == 0|| char_s2 == 0)
		return (0);
			

	while(n != '0')
	{
		if	(*char_s1 != *char_s2)
			return (*char_s1 - *char_s2);
		n--;
		char_s1++;
		char_s2++;		
	}
	return (0);
}
