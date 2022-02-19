/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:53:03 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 02:18:58 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	str_int;
	int	signal;

	str_int = 0;
	signal = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = signal * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		str_int = str_int * 10;
		str_int = str_int + *str - '0';
		str++;
	}
	return (str_int * signal);
}
