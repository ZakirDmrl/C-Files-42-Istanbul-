/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:23:01 by mdemirel          #+#    #+#             */
/*   Updated: 2024/01/26 11:23:01 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void){
	int	 number;
	int    
	int j;
	int k;
	number = 9;
	while (i < number)
    {
		char digiti = i + '0';
        char space = ' ';
		j = 0; 
        while (j < number)
		{
            char digitj = j + '0';
			k = 0;
            for(int k = 0; k < number; k ++){
                char digitk = k + '0';
                if( (i != k) && (j != k) && (i != j)){
                    write(1,&digiti,1);
                    write(1,&digitj,1);
                    write(1,&digitk,1);
                    write(1,&space,1);

                }
            }
        }
        

    }
}
