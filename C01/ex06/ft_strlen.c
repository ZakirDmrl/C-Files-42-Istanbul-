/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:35:35 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/30 01:35:35 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	char c;
	int counter;
	
	c = *str;
	counter = 0;
	while (c != '\0')
	{
		c = *(str+counter);
		counter++;
	}
	return (counter-1);
}
