/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:32 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 11:29:16 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	
	printf("BOOLEAN = %d\n", 	ft_str_is_lowercase(a));
	printf("BOOLEAN = %d\n", 	ft_str_is_lowercase(b));
	printf("BOOLEAN = %d\n", 	ft_str_is_lowercase(c));
	printf("BOOLEAN = %d\n", 	ft_str_is_lowercase(d));
} */