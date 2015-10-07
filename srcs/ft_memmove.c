/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:27:06 by ocosquer          #+#    #+#             */
/*   Updated: 2015/10/07 12:47:12 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	str1 = (char*)s1;
	str2 = ft_strdup(s2);
	i = 0;
	if (str2)
	{
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
		free(str2);
	}
	return (s1);
}
