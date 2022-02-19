/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:17:49 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 19:41:39 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	pin;
	int	to_find_size;

	to_find_size = ft_strlen(to_find);
	if (to_find_size == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		pin = 0;
		while (str[i + pin] == to_find[pin])
		{
			pin++;
			if (pin == to_find_size)
				return (&str[i]);
		}
		i++;
	}
	return ('\0');
}
