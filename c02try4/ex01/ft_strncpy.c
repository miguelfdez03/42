/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:23:46 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/14 12:28:36 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start_dest;
	unsigned int	i;

	start_dest = dest;
	if (n > 0)
	{
		i = 0;
		while (i != n)
		{
			if (*src != '\0')
			{
				*dest = *src;
				src++;
			}
			else
			{
				*dest = '\0';
			}
			dest++;
			i++;
		}
	}
	return (start_dest);
}

/* int	main(void)
{
	char a[15] = "";
	char b[15] = "Up to you!";
	char *dest;

	dest = ft_strncpy(a, b, 4);
	printf("A = %s, B = %s \n", a, b);
} */
