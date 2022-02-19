/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:05:52 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 19:49:28 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	last_char; //is space or special

	last_char = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		if ((i == 0 || last_char == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - ' ';
		if (str[i] >= 'A' && str[i] <= 'Z')
			last_char = 0;
		else if (str[i] >= 'a' && str[i] <= 'z')
			last_char = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			last_char = 0;
		else
			last_char = 1;
		i++;
	}
	return (str);
}
