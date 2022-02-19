/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:12:33 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/13 21:01:15 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = -1;
	while (++i < --size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
	}
}
