/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:02:16 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/18 15:05:39 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/* int	main(void)
{
	char	mensaje1[] = "Hola, mundo!\n";
	char	mensaje2[] = "Probando ft_putstr\n";
	char	mensaje3[] = "¡Funciona perfectamente!\n";

	ft_putstr(mensaje1);
	ft_putstr(mensaje2);
	ft_putstr(mensaje3);
	return (0);
} */
