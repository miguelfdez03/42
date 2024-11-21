/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:45:03 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/18 19:22:49 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int	main(void)
{
	char str1[] = "42";
	char str2[] = "   -42";
	char str3[] = "   +123";
	char str4[] = "123abc";
	char str5[] = "   -0";
	char str6[] = "2147483647";    // Máximo entero
	char str7[] = "-2147483648";   // Mínimo entero
	char str8[] = "   \t  +56";
	char str9[] = "abcd123";       // No empieza con números

	printf("Input: '%s' -> Output: %d\n", str1, ft_atoi(str1));
	printf("Input: '%s' -> Output: %d\n", str2, ft_atoi(str2));
	printf("Input: '%s' -> Output: %d\n", str3, ft_atoi(str3));
	printf("Input: '%s' -> Output: %d\n", str4, ft_atoi(str4));
	printf("Input: '%s' -> Output: %d\n", str5, ft_atoi(str5));
	printf("Input: '%s' -> Output: %d\n", str6, ft_atoi(str6));
	printf("Input: '%s' -> Output: %d\n", str7, ft_atoi(str7));
	printf("Input: '%s' -> Output: %d\n", str8, ft_atoi(str8));
	printf("Input: '%s' -> Output: %d\n", str9, ft_atoi(str9));

	return (0);
} */
