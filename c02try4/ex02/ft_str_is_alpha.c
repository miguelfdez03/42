/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:12:01 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 11:29:30 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 1;
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			n = 0;
		str++;
	}
	return (n);
}

/* int	main(void)
{
	char	a[10] = "Uptoyou";
	
	printf("BOOLEAN = %d", 	ft_str_is_alpha(a));
} */