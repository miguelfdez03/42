/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:52:59 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 19:29:05 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*src_start;
	unsigned int	dest_size;

	src_start = src;
	dest_size = size;
	while (*src != '\0' && dest_size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		dest_size--;
	}
	*dest = '\0';
	while (*src != '\0')
	{
		src++;
	}
	return (src - src_start);
}

/* int main() {
	char src[] = "Hola, mundo!";
	char dest[6];
	size_t result = ft_strlcpy(dest, src, sizeof(dest));

	printf("String: %s\n", dest);
	printf("Length of src: %zu\n", result);

	return (0);
} */
