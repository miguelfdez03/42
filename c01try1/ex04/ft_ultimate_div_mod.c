/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:13:38 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/07 12:16:31 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	mod;

	result = *a / *b;
	*b = *a % *b;
	*a = result;
	*b = mod;
}

/* int	main(void)
{
	int a = 42;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("Resto = %d, cociente = %d", b, a);
} */