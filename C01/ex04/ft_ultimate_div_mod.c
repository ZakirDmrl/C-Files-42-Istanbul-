/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:21:44 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/30 01:21:44 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int tempa;
	int tempb;

	tempa = a;
	tempb = b;
	a = tempa / tempb;
	b = tempb % tempa;
}
