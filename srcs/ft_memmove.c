/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:27:06 by ocosquer          #+#    #+#             */
/*   Updated: 2015/07/06 00:57:02 by olivier          ###   ########.fr       */
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
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
		free(str2);
	}
	/*
	if (str1 >= str2 && str1 <= (str2 + ft_strlen(str2)))
	{
		while (index < n)
		{
			str1[n - index - 1] = str2[n - index - 1];
			index++;
		}
	}
	else
	{
		while (index < n)
		{
			str1[index] = str2[index];
			index++;
		}
	}*/
	return (s1);
}
