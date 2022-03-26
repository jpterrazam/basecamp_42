/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:13:22 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 19:39:12 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (i++ < argc - 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
	}
}
