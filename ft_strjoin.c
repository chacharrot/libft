/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 23:06:38 by scha              #+#    #+#             */
/*   Updated: 2021/01/03 23:06:38 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if(!str)
		return(NULL);
	i = 0;
	j = 0;
	while(s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	while(s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return(str);
}