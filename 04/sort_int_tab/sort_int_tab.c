/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:55:59 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/16 13:59:15 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp = 0;
	while(i < (size -1))
	{
		if(tab[i] > tab[i+1])
		{
			tmp =  tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i=0;
		}
		else
			i++;
	}
}