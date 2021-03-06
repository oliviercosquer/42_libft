/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:40:55 by ocosquer          #+#    #+#             */
/*   Updated: 2015/10/08 13:58:01 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *byte, int c, size_t len)
{
	char		new_char;
	char		*new_array;
	size_t		length;

	length = 0;
	new_char = (char)c;
	new_array = (char *)byte;
	if (byte)
	{
		while (length < len)
		{
			new_array[length] = new_char;
			length++;
		}
	}
	return (byte);
}
