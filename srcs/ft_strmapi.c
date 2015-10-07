/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olivier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:20:10 by ocosquer          #+#    #+#             */
/*   Updated: 2015/10/07 15:11:42 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*new_str;
	int		index;

	len = ft_strlen((char*)s);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	index = 0;
	while (index < len)
	{
		new_str[index] = (*f)(index, s[index]);
		index++;
	}
	return (new_str);
}
