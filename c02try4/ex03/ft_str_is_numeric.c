/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:01:35 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 11:29:24 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9'))
			n = 0;
		str++;
	}
	return (n);
}

/* int	main(void)
{
	char	a[10] = "1234";	
	char	b[10] = "Up to you";

	printf("BOOLEAN = %d\n", 	ft_str_is_numeric(a));
	printf("BOOLEAN = %d", 	ft_str_is_numeric(b));
} */