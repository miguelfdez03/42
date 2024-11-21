/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:41:12 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/06 20:28:30 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	temp = 0;
	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

int	main(void)
{
	int numbers[] = {1, 2, 3, 4, 5};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	ft_rev_int_tab(numbers, size);

	printf("Reversed array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return (0);
}