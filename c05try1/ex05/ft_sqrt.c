/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:04:41 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 00:08:57 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 0)
	{
		while (number * number <= nb)
		{
			if (number * number == nb)
				return (number);
			else if (number >= 46341)
				return (0);
			number++;
		}
	}
	return (0);
}

/* int	main(void)
{
	// Casos de prueba
	printf("Raíz cuadrada de -1: %d\n", ft_sqrt(-1));  // 0
	printf("Raíz cuadrada de 0: %d\n", ft_sqrt(0));    // 0
	printf("Raíz cuadrada de 1: %d\n", ft_sqrt(1));    // 1
	printf("Raíz cuadrada de 4: %d\n", ft_sqrt(4));    // 2
	printf("Raíz cuadrada de 16: %d\n", ft_sqrt(16));  // 4
	printf("Raíz cuadrada de 25: %d\n", ft_sqrt(25));  // 5
} */