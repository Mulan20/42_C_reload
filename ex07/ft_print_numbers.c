/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:53:43 by nkham             #+#    #+#             */
/*   Updated: 2025/08/26 18:35:49 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
{
	write (1, &c, 1);
}
*/

void	ft_print_numbers(void)
{
	char	k;

	k = '0';
	while (k <= '9')
	{
		ft_putchar(k);
		k++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
