/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkayis <tkayis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:58:45 by tkayis            #+#    #+#             */
/*   Updated: 2023/01/29 18:18:42 by tkayis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putu(unsigned int n, int *len)
{
	char	c;

	if (n / 10)
		ft_putu(n / 10, len);
	c = '0' + n % 10;
	ft_putchar(c, len);
}