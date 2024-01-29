/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 02:03:48 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/30 02:03:48 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j + 1) != '\0')
			{
				if (*(tab + j) > *(tab + j + 1))
				{
					temp = *(tab + j);
					*(tab + j) = *(tab + j + 1);
					*(tab + j + 1) = temp;
				}
			}
			j++;
		}
		i++;
	}
}

