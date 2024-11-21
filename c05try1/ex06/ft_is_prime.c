/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:07:46 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 00:12:06 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number;

	number = 2;
	if (nb < 2)
		return (0);
	while (number <= nb / 2)
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}

/* int	main(void)
{
	// Casos de prueba
	printf("¿Es primo -1? %d\n", ft_is_prime(-1));  // 0
	printf("¿Es primo 0? %d\n", ft_is_prime(0));    // 0
	printf("¿Es primo 1? %d\n", ft_is_prime(1));    // 0
	printf("¿Es primo 2? %d\n", ft_is_prime(2));    // 1
	printf("¿Es primo 3? %d\n", ft_is_prime(3));    // 1
	printf("¿Es primo 4? %d\n", ft_is_prime(4));    // 0
	printf("¿Es primo 17? %d\n", ft_is_prime(17));  // 1
	printf("¿Es primo 25? %d\n", ft_is_prime(25));  // 0
} */