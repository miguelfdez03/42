/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:16:55 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 00:09:24 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
	}
	return (fact);
}

/* int	main(void)
{
	
	printf("Factorial de 0: %d\n", ft_iterative_factorial(0)); // 1
	printf("Factorial de 1: %d\n", ft_iterative_factorial(1)); // 1
	printf("Factorial de 5: %d\n", ft_iterative_factorial(5)); // 120
	printf("Factorial de 10: %d\n", ft_iterative_factorial(10));// 3628800
	printf("Factorial de 12: %d\n", ft_iterative_factorial(12));// 479001600
} */