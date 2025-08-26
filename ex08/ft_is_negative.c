/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:01:31 by nkham             #+#    #+#             */
/*   Updated: 2025/08/26 18:38:18 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
{
	write(1, &c, 1);
}
*/

void	ft_is_negative(int n)
{
	char	k;

	k = 'N';
	if (n < 0)
	{
		k = 'N';
		ft_putchar(k);
	}
	else
	{
		k = 'P';
		ft_putchar(k);
	}
}
/*
int	main(void)
{
	ft_is_negative(-9);
	return (0);
}*/
