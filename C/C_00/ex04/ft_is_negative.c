/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:53:58 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/13 18:14:11 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int n =5;
	
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

int main (void)
{
	ft_is_negative(5);
}
