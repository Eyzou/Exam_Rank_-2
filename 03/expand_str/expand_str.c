/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:05:37 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 11:11:36 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int flag = 0;
	if(argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
		i++;
		while(argv[1][i])
		{
			if(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
				flag = 1;
			if(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
			{
				if(flag == 1)
				{
					write(1,"   ",3);
					flag = 0;
				}
				write(1, &argv[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}