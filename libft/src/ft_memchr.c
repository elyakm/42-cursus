/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:20:55 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/26 20:29:36 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;
	
	i = 0;
	str = (unsigned char*)s;
	to_find = (unsigned char)c;
	while (n > i && str[i] != '\0')
	{
		if (str[i] == (to_find))
		{
			return (str + i);
		}
		i++;
	}
	if (str[i] == (to_find))
		{
			return (str + i);
		}
	return(NULL);
}
