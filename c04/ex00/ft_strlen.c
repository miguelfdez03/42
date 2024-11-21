/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:28:16 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/18 15:01:35 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/* int	main(void)
{
	char test1[] = "Hola, mundo!";
	char test2[] = "";
	char test3[] = "1234567890";

	printf("La longitud de '%s' es: %d\n", test1, ft_strlen(test1));
	printf("La longitud de '%s' es: %d\n", test2, ft_strlen(test2));
	printf("La longitud de '%s' es: %d\n", test3, ft_strlen(test3));

	return (0);
} */