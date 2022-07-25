/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eayvali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:07:38 by eayvali           #+#    #+#             */
/*   Updated: 2022/07/25 17:34:12 by eayvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_is_negative(int n);
{ 
	char positive;
	char negative;

	negative ='N';
	positive ='P'; 

	if (n >= 0)
	{
			ft_putchar(positive);
	}
	else
	{
			ft_putchar(negative);
	}

}
int main()
{
		ft_is_negative(int n);
}
