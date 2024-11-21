/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:59:38 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 11:30:08 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			n = 0;
		str++;
	}
	return (n);
}

/* int	main(void)
{
	char a[] = "111";
	char b[] = "uçptoyou";
	char c[] = "";
	char d[] = "UPTOYOU";

	printf("BOOLEAN = %d\n", ft_str_is_printable(a));
	printf("BOOLEAN = %d\n", ft_str_is_printable(b));
	printf("BOOLEAN = %d\n", ft_str_is_printable(c));
	printf("BOOLEAN = %d\n", ft_str_is_printable(d));
} */