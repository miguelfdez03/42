/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:56:23 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 11:29:55 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			n = 0;
		str++;
	}
	return (n);
}

/* int	main(void)
{
    char a[] = "111";
	char b[] = "uptoyou";
    char c[] = "";
	char d[] = "UPTOYOU";
	
	printf("BOOLEAN = %d\n", 	ft_str_is_uppercase(a));
	printf("BOOLEAN = %d\n", 	ft_str_is_uppercase(b));
	printf("BOOLEAN = %d\n", 	ft_str_is_uppercase(c));
	printf("BOOLEAN = %d\n", 	ft_str_is_uppercase(d));
} */