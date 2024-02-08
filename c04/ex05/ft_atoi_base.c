/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:16:34 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/07 15:16:34 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	error(char *base)
{
	int	i;
	int	j;

	if (!base)
	{
		return (0);
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		if (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

display(char *str, char *base, unsigned int base_length)
{
	if (!str)
	{

	}
}

int ft_atoi_base(char *str, char *base)
{
	unsigned int	base_length;

	base_length = error(base);
	if (!base_length)
	{
		return ;
	}
	display(str,base,base_length);
}
