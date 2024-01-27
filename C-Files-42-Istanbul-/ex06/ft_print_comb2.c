/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:02:16 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/27 13:02:16 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2()
{
	char	space;
	char	virgul;
	char	digita;
	char	digitb;
	char	digiti;
	char	digitj;
	int		a;
	int		b;
	int 	i;
	int 	j;

	virgul = ',';
	space = ' ';
	a = 0;
	b = 0;

	while (a < 10)
	{
		digita = a + '0';
		b = 0;

		while (b < 10)
		{
			digitb = b + '0';
			i = 0;

			while (i < 10)
			{
				digiti = i + '0';
				j = 0;

				while (j < 10)
				{
					digitj = j + '0';

					if (!((a == i) && (b == j)))
					{
						write(1, &digita, 1);
						write(1, &digitb, 1);
						write(1, &space, 1);
						write(1, &digiti, 1);
						write(1, &digitj, 1);
						write(1, &virgul, 1);
					}

					j++;
				}

				i++;
			}

			b++;
		}

		a++;
	}
}
