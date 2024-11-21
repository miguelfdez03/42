/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:02:00 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/06 14:39:09 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int a = 42;
	int b = 24;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d divido entre %d = %d \n", a, b, div);
	printf("%d modulo de %d = %d", a, b, mod);
} */