/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:23:41 by scha              #+#    #+#             */
/*   Updated: 2020/12/23 14:23:41 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    src_len = 0;
    while(src[src_len])
        src_len++;
    i = 0;
    while(--size && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(src_len);
}
