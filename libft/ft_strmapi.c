/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:25:34 by esali             #+#    #+#             */
/*   Updated: 2022/03/03 18:06:49 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*re;
	int		i;

	re = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (re == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		re[i] = f(i, s[i]);
		i++; 
	}
	return (re);
}
