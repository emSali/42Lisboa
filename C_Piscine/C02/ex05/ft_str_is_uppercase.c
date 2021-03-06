/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:00:50 by esali             #+#    #+#             */
/*   Updated: 2021/09/14 18:53:58 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_up;

	is_up = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
		{
			is_up = 0;
		}
		str++;
	}
	return (is_up);
}
