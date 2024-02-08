/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:16:54 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/07 16:16:54 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;

	guess = nb;
	if (nb < 0)
	{
		return (-1);
	}
	else
	{
		while (guess * guess > nb)
		{
			guess = 0.5 * (guess + nb / guess);
		}
	}
	return (guess);
}
