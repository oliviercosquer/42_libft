/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:17:23 by ocosquer          #+#    #+#             */
/*   Updated: 2015/10/13 18:38:26 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *str_dest, const void *str_src, int c, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*src;
	char			character;
	void			*tmp;

	i = 0;
	character = (char)c;
	src = (char *)str_src;
	dest = (char *)str_dest;
	tmp = NULL;
	while (src[i] && i < n && src[i] != character)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == character)
		tmp = &str_dest[i + 1];
	return (tmp);
}
