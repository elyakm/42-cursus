/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:48:05 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/23 16:27:04 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*var;

	var = (unsigned char *)b;
	while (len > 0)
	{
		*var = (unsigned char)c;
		var++;
		len--;
	}
	return (b);
}
