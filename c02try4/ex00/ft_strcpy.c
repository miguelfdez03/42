/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:02:51 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 16:53:38 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dir_memory;

	dir_memory = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (dir_memory);
}

/* int	main(void)
{
	char	a[15] = "Approve me!";
	char	b[15] = "Up to you!";
	char	*dest;

	dest = ft_strcpy(a, b);
	printf("A = %s, B = %s \n", a, b);
} */
