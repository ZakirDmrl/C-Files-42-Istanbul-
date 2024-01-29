/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:39:37 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/26 11:39:37 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;
	int		number;
	int		i;

	i = 0;
	number = 9;
	while (i++ <= number)
	{
		digit = i + '0';
		write (1, &digit, 1);
	}
}
