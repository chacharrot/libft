/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:58:41 by scha              #+#    #+#             */
/*   Updated: 2021/01/06 18:58:41 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *dest;

	dest = malloc(sizeof(size) * count);
	if(!dest)
		return(NULL);
	ft_bzero(dest,count);
	return(dest);
}
