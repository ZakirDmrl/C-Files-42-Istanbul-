/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:38:14 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/27 13:38:14 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	int		size;
	int		temp;

	temp = nb;
	do
	{
		temp /= 10;
		size++;
	} while ((temp >= 1) || (temp <= -1));

	if (nb >= 0)
	{
	}
	else
	{
		size++;
	}

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	char buffer[size];
	int i = 0;

	do
	{
		buffer[i++] = nb % 10 + '0';
		nb /= 10;
	} while (nb > 0);

	while (--i >= 0)
	{
		write(1, &buffer[i], 1);
	}
}
