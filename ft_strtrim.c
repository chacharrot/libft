/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 16:15:20 by scha              #+#    #+#             */
/*   Updated: 2021/01/04 16:15:20 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t isinset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while(set[i])
	{
		if(c == set[i])
			return(1);
		i++;
	}
	return(0);
}

char *ft_strtrim(const char *s1, const char *set)
{
    char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while(s1[start] && isinset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while(s1[end] && isinset(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if(!str)
		return(NULL);
	i = 0;
	while(start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return(str);
}
