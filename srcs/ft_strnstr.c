/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocosquer <ocosquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:49:14 by ocosquer          #+#    #+#             */
/*   Updated: 2015/10/13 21:06:38 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*found;
	size_t	i;
	size_t	j;

	found = NULL;
	i = 0;
	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	while (s1[i] && !found && i < n)
	{
		found = (char *)s1 + i;
		j = 0;
		while (s2[j] && (i + j) < n)
		{
			found = (s1[i + j] == s2[j]) ? found : NULL;
			j++;
		}
		i++;
	}
	if (j < ft_strlen((char *)s2))
		return (NULL);
	return (found);
}
