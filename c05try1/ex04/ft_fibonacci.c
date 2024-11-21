/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:02:42 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 12:40:47 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* int	main(void)
{
	// Casos de prueba
	printf("Fibonacci de -1: %d\n", ft_fibonacci(-1));  // -1
	printf("Fibonacci de 0: %d\n", ft_fibonacci(0));    // 0
	printf("Fibonacci de 1: %d\n", ft_fibonacci(1));    // 1
	printf("Fibonacci de 5: %d\n", ft_fibonacci(5));    // 5
	printf("Fibonacci de 10: %d\n", ft_fibonacci(10));  // 55
	printf("Fibonacci de 12: %d\n", ft_fibonacci(12));  // 144
} */