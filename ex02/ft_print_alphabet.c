/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eayvali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:39:12 by eayvali           #+#    #+#             */
/*   Updated: 2022/07/25 15:46:21 by eayvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
		while(c <= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
int main()
{
	ft_print_reverse_alphabet();
}
