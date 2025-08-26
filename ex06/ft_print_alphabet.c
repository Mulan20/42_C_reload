/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:42:02 by nkham             #+#    #+#             */
/*   Updated: 2025/08/26 18:34:12 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
{
	write (1, &c, 1);
}
*/

void	ft_print_alphabet(void)
{
	char	character;

	character = 97;
	while (character <= 122)
	{
		ft_putchar(character);
		character++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
	return (0);
}
*/
