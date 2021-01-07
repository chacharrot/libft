/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 19:15:14 by scha              #+#    #+#             */
/*   Updated: 2021/01/04 19:15:14 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    size_t	i;
	size_t	len;

	len = ft_strlen(s);
    if(!s || !f)
	{
    	return(NULL);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if(!str)
        return(NULL);
	i = 0;
	while(i < len)
	{
		str[i] = f((unsigned int)i,s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}
