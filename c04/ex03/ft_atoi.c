/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:49:21 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/07 13:49:21 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atio(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9') || (*str == '-') \
		|| (*str == ' ' || *str == '+'))
		{
			if (*str == '-')
			{
				sign *= -1;
			}
			if (*str >= '0' && *str <= '9')
			{
				result = 10 * result + (*str - '0');
			}
			str++;
		}
		else
			break ;
	}
	return (sign * result);
}
