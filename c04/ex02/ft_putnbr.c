/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:07:09 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/18 15:23:26 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

/* int	main(void)
{
	ft_putnbr(42);        // Caso simple
	ft_putchar('\n');
	ft_putnbr(-42);       // Número negativo
	ft_putchar('\n');
	ft_putnbr(0);         // Cero
	ft_putchar('\n');
	ft_putnbr(2147483647); // Número máximo de 32 bits
	ft_putchar('\n');
	ft_putnbr(-2147483648); // Número mínimo de 32 bits
	ft_putchar('\n');

	return (0);
} */
