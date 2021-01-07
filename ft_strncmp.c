/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:45:38 by scha              #+#    #+#             */
/*   Updated: 2020/12/26 21:45:38 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_strncmp(const char* str1, const char* str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && (unsigned char)str1[i] == (unsigned char)str2[i]
			&& i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}