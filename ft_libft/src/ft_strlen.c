/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:11:00 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/19 18:21:40 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ft_libft.h"

size_t	ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return(i);
}

int main(void)
{
	char test[] = "hiiie";
	printf("%zu\n", ft_strlen(test));
}
