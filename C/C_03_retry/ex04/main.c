/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:05:51 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 17:31:52 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main (void)
{
	char palheiro[20] = "BatataFritFrita";
	char agulha[10] = "Frita";
	char *ret;

	ret = strstr(palheiro, agulha);

	printf("strstr   : Substring %s encontrada no endereço %p\n", ret, ret);
	
	ret = ft_strstr(palheiro, agulha);

	printf("ft_strstr: Substring %s encontrada no endereço %p\n", ret, ret);

	return(0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int    main(void)
{
    char *str;
    char *to_find;
    char *buff;
    char *ft_buff;

    str = strcpy(calloc(11, sizeof(char)), "alo galera");
    to_find = strcpy(calloc(7, sizeof(char)), "galera");
    buff = strstr(str, to_find);
    ft_buff = ft_strstr(str, to_find);
    if (buff != ft_buff)
        printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
    else
        printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
    str = strcpy(calloc(11, sizeof(char)), "alo galera");
    to_find = strcpy(calloc(7, sizeof(char)), "galerA");
    buff = strstr(str, to_find);
    ft_buff = ft_strstr(str, to_find);
    if (buff != ft_buff)
        printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
    else
        printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
    str = strcpy(calloc(11, sizeof(char)), "alo galera");
    to_find = strcpy(calloc(1, sizeof(char)), "");
    buff = strstr(str, to_find);
    ft_buff = ft_strstr(str, to_find);
    if (buff != ft_buff)
        printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
    else
        printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
    return (0);
}
*/
