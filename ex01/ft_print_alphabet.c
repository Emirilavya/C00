/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eayvali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:45:11 by eayvali           #+#    #+#             */
/*   Updated: 2022/07/25 13:56:59 by eayvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{

	char c;
	c = 'a';
		while(c <= 'z')
	{ 
		write(1, &c, 1);
		c++;
	}

}
int main()
{
	ft_print_alphabet();
}
