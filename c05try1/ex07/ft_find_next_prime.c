/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:10:25 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 12:40:28 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0 || nb == 1)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}

/* int main(void)
{
	printf("-10 Próximo primo: %d\n", ft_find_next_prime(-10)); // 2
	printf("0 Próximo primo: %d\n", ft_find_next_prime(2));     // 3
	printf("1 Próximo primo: %d\n", ft_find_next_prime(4));     // 5
	printf("14 Próximo primo: %d\n", ft_find_next_prime(14));   // 17
	printf("20 Próximo primo: %d\n", ft_find_next_prime(20));   // 23
	printf("97 Próximo primo: %d\n", ft_find_next_prime(97));   // 97
	printf("100 Próximo primo: %d\n", ft_find_next_prime(100)); // 101
} */