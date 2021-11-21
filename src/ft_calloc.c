/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:08:11 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/21 20:08:12 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;

	p = malloc(nelem * elsize);
	if (!p)
		return (NULL);
	p = ft_memset(p, 0, nelem * elsize);
	return (p);
}
