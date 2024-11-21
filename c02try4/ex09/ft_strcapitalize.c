/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:53:19 by miguel-f          #+#    #+#             */
/*   Updated: 2024/11/12 12:13:52 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		b;

	start = str;
	b = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')) && b)
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
			b = 0;
		}
		else if (!(*str >= 'a' && *str <= 'z') && !(*str >= '0' && *str <= '9'))
			b = 1;
		str++;
	}
	return (start);
}

/* int	main(void)
{
	char a[100] = ".sALUT, oMment 4tu vas ? quaraNte-deux; cinqua5nte";

	printf("%s \n", ft_strcapitalize(a));
} */
