/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 03:05:11 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 03:27:42 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lines(int *o)
{
	if (o[8] + o[12] > 5 || o[8] + o[12] < 3)
		return (1);
	if (o[9] + o[13] > 5 || o[9] + o[13] < 3)
		return (1);
	if (o[10] + o[14] > 5 || o[10] + o[14] < 3)
		return (1);
	if (o[11] + o[15] > 5 || o[11] + o[15] < 3)
		return (1);
	return (0);
}

int	check_columns(int *o)
{
	if (o[0] + o[4] > 5 || o[0] + o[4] < 3)
		return (1);
	if (o[1] + o[5] > 5 || o[1] + o[5] < 3)
		return (1);
	if (o[2] + o[6] > 5 || o[2] + o[6] < 3)
		return (1);
	if (o[3] + o[7] > 5 || o[3] + o[7] < 3)
		return (1);
	return (0);
}