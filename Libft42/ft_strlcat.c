/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvodak <lvodak@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 00:02:52 by lvodak            #+#    #+#             */
/*   Updated: 2023/10/23 00:30:38 by lvodak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = ft_strlen(dst);
	n = 0;
	j = ft_strlen((char *)src);
	if (dstsize < i)
		return (j + dstsize);
	while (*src && n + i + 1 < dstsize)
		dst[i + n++] = *src++;
	dst[n + i] = '\0';
	return (i + j);
}
