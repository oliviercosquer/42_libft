/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:17:23 by ocosquer          #+#    #+#             */
/*   Updated: 2015/10/07 12:55:03 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *str_dest, const void *str_src, int c, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*src;
	char			character;
	/*char			*ptr;

	dest = (char *)str_dest;
	src = (char *)str_src;
	i = 0;
	ptr = 0;
	while (i < n && ptr == 0)
	{
		dest[i] = src[i];
		if (src[i] == ((char)c))
			ptr = dest + i + 1;
		i++;
	}
	return (ptr);*/

	i = 0;
	character = (char)c;
	src = (char *)str_src;
	dest = (char *)str_dest;
	while (src[i] && i < n && src[i] != character)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == character)
		return (&src[i]);
	return (NULL);
}
