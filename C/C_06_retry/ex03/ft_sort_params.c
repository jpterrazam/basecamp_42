/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:17:37 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 19:39:50 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int		i;
	int		swapped;
	char	*aux;

	i = 1;
	while (1)
	{
		i = 1;
		swapped = 0;
		while (i < size)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				aux = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = aux;
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
	}
}

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
		ft_sort_str_tab(argv, (argc - 1));
		i = 0;
		while (i++ < argc - 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
	}
}
