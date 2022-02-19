/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:42:19 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/13 16:45:40 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main (void)
{
	int  tab[] = {8581,2,33,264,625,622,27,28,122,2610,4222,122};
	int size;
	int i = 0;

	size = sizeof(tab)/sizeof(tab[0]);
	
	
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("---> ");
	
	ft_sort_int_tab(tab, size);
	
	i = 0;	
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("\n");
}