/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:42:19 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 13:45:56 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main (void)
{
	int  tab[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,44};
	int size;
	int i = 0;

	size = sizeof(tab)/sizeof(tab[0]);
	
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("---> ");
	
	ft_rev_int_tab(tab, size);
	
	i = 0;	
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("\n");
}