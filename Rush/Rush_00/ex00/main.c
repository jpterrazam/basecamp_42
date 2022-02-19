/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:07:31 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/13 21:31:15 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	theme(int number);

int	pow_x(int exp)
{
	int	result;

	result = 1;
	while (exp > 0)
	{
		result = (result * 10);
		exp--;
	}
	return (result);
}

int	string_to_int(char string[])
{
	int	i;
	int	size;
	int	str_int;

	str_int = 0;
	size = 0;
	while (string[size])
		size++;
	i = size ;
	while (i > 0)
	{
		if (string[i - 1] >= '0' && string[i - 1] <= '9')
			str_int = str_int + ((string[i - 1] - '0') * (pow_x((size - i))));
		else
			str_int = 0;
		i--;
	}
	return (str_int);
}

int	main(int argc, char *argv[])
{
	if (argc == 1) //->0
	{
		theme(0);
		rush(5, 5);
		return (0);
	}
	else if (argc == 2) //->1
	{
		theme(string_to_int(argv[1]));
		rush(5, 5);
		return (0);
	}
	else if (argc == 3) //->2
	{
		theme(0);
		rush(string_to_int(argv[1]), string_to_int(argv[2]));
		return (0);
	}	
	else if (argc == 4) //->3
	{
		theme(string_to_int(argv[1]));
		rush(string_to_int(argv[2]), string_to_int(argv[3]));
		return (0);
	}
	else
		write(1, "Quantidade de parâmetros inválida!\n", 37);
}
