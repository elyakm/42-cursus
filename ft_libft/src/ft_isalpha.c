/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:13:14 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/19 17:50:56 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_libft.h"

int	isalpha(int c)
{
	return c;
}

int main()
{
	char *str = "Allo!";
	int i = 0;
	while(str[i])
		printf("ISALPHA: %d\n", isalpha(str[i++]));
}