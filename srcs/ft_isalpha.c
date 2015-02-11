/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocosquer <ocosquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:11:11 by ocosquer          #+#    #+#             */
/*   Updated: 2015/02/11 01:51:57 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int c)
{
	int	result;

	result = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		result = 1024;
	return (result);
}
