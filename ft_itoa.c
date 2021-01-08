/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:10:30 by scha              #+#    #+#             */
/*   Updated: 2021/01/08 19:59:43 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			digitnumber(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i = 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nbr;

	i = digitnumber(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		nbr = (unsigned int)(n * -1);
		*str = 45;
	}
	else
		nbr = n;
	str[i] = '\0';
	while (i--)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		if (n < 0 && i == 1)
			break ;
	}
	return (str);
}
