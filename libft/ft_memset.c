/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:28:48 by esali             #+#    #+#             */
/*   Updated: 2022/02/17 17:45:57 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*d;

	d = b;
	i = 0;
	while (i != (int) len)
	{
		d[i] = c;
		i++;
	}
	return (b);
}
