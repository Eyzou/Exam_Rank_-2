/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:40:00 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/28 08:43:39 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;
	while(str[len])
		len++;
	return(len);
}

/*int main(void)
{
	printf("%i",ft_strlen("kikoo"));
	
}*/
