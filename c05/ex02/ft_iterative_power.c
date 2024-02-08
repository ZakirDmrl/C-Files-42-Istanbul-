/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:07:55 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/07 16:07:55 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (power == 0 || (nb == 0 && power == 0))
	{
		return (1);
	}
	else
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
	return (0);
}
