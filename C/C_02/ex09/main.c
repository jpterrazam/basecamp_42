/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:41:20 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/15 00:44:38 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main (void)
{
	char str[] = "oi, TUDO~bem? 42palAvras quarEnta-e-duas; cinqUenta+e+Um";
	char *str_cap;

	printf("%s ---> ", str);

	str_cap = ft_strcapitalize(str);

	printf("%s\n", str_cap);

	return (0);
}