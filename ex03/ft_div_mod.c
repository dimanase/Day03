/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:52:26 by dimanase          #+#    #+#             */
/*   Updated: 2020/07/15 15:27:06 by dimanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div= a / b;
	*mod = a % b;
}

int main()
{
int 	a = 5;
	int b = 2;
int div;
int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
	return 0;
}
