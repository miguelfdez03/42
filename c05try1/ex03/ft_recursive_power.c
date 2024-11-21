/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:43:01 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 00:09:12 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

/* int	main(void)
{
	// Casos de prueba
	printf("2^3 = %d\n", ft_recursive_power(2, 3));    // 8
	printf("5^0 = %d\n", ft_recursive_power(5, 0));    // 1
	printf("0^5 = %d\n", ft_recursive_power(0, 5));    // 0
	printf("2^10 = %d\n", ft_recursive_power(2, 10));  // 1024
	printf("(-3)^3 = %d\n", ft_recursive_power(-3, 3));// -27
	printf("10^-2 = %d\n", ft_recursive_power(10, -2));// 0
	printf("1^5 = %d\n", ft_recursive_power(1, 5));    // 1
} */