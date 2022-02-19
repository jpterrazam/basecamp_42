/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:05:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/15 02:40:39 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 0 && c <= 31) || c == 127)
		{
			ft_putchar('\\');
			ft_putchar(hexa[c / 16]);
			ft_putchar(hexa[c % 16]);
		}
		else
			ft_putchar(c);
		i++;
	}
}
