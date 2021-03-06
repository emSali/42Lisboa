/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:54:00 by esali             #+#    #+#             */
/*   Updated: 2022/02/17 17:46:40 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*d;

	d = s;
	i = 0;
	while (i != (int) n)
	{
		d[i] = '\0';
		i++;
	}
}
