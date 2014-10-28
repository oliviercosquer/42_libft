/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocosquer <ocosquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:18:37 by ocosquer          #+#    #+#             */
/*   Updated: 2013/12/01 20:21:00 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	len;
	char	*new_str;
	int	index;

	len = ft_strlen((char*)s);
	new_str = ft_memalloc(len + 1);
	index = 0;
	while (index < len)
	{
		new_str[index] = (*f)(s[index]);
		index++;
	}
	return (new_str);
}
