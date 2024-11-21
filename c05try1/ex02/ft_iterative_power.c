/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:38:16 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 00:09:16 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/* int	main(void)
{
	// Casos de prueba
	printf("2^3 = %d\n", ft_iterative_power(2, 3));    // 8
	printf("5^0 = %d\n", ft_iterative_power(5, 0));    // 1
	printf("0^5 = %d\n", ft_iterative_power(0, 5));    // 0
	printf("2^10 = %d\n", ft_iterative_power(2, 10));  // 1024
	printf("(-3)^3 = %d\n", ft_iterative_power(-3, 3));// -27
	printf("10^-2 = %d\n", ft_iterative_power(10, -2));// 0
	printf("1^5 = %d\n", ft_iterative_power(1, 5));    // 1
} */