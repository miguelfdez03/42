/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:24:07 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 13:58:55 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main(void)
{
	
	printf("Factorial de 0: %d\n", ft_recursive_factorial(0)); // 1
	printf("Factorial de 1: %d\n", ft_recursive_factorial(1)); // 1
	printf("Factorial de 5: %d\n", ft_recursive_factorial(5)); // 120
	printf("Factorial de 10: %d\n", ft_recursive_factorial(10));// 3628800
	printf("Factorial de 12: %d\n", ft_recursive_factorial(12));// 479001600
} */