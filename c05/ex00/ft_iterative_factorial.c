/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:57:19 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/07 15:57:19 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 2;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
	return (0);
}
