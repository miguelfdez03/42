/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:28:18 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/19 12:02:20 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (start);
}

/* int main() {
	char dest[50] = "Hello, ";
	char src[] = "world!";
	unsigned int n = 3;

	printf("Before ft_strncat: %s\n", dest);
	ft_strncat(dest, src, n);
	printf("After ft_strncat %s\n", dest);

	return (0);
} */