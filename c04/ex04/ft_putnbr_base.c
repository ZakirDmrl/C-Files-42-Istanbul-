/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:29:00 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/07 14:29:00 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	error(char *str)
{
	int	i;
	int	j;

	if (!str)
	{
		return (0);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		if (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	display(int nbr, char *str, unsigned int str_length)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= str_length)
	{
		display(nb / str_length, str, str_length);
	}
	ft_putchar(str[nb % str_length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_length;

	base_length = error(base);
	if (!base_length)
	{
		return ;
	}
	display(nbr, base, base_length);
}
