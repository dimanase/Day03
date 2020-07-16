/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:47:28 by dimanase          #+#    #+#             */
/*   Updated: 2020/07/15 15:08:37 by dimanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int d;
	d = 0;

	while(str[d])
	{
		d++;
	}
	return (d);
}

int main()
{
	printf("%d\n", ft_strlen("Hello"));
	return 0;
}
