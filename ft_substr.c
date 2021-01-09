/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:34:38 by scha              #+#    #+#             */
/*   Updated: 2021/01/09 15:31:32 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*scpy;
	size_t	i;

	if (*s == 0)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		scpy = malloc(sizeof(char) * 1);
		if (!scpy)
			return (NULL);
		scpy[0] = '\0';
		return (scpy);
	}
	scpy = malloc(sizeof(char) * (len + 1));
	if (!scpy)
		return (NULL);
	i = 0;
	while (i < len)
		scpy[i++] = s[start++];
	scpy[i] = '\0';
	return (scpy);
}
