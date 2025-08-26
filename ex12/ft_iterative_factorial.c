/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 20:11:17 by nkham             #+#    #+#             */
/*   Updated: 2025/08/26 20:11:51 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i > 1)
	{
		nb *= i - 1;
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	i = 12;
	printf("%d\n",ft_iterative_factorial(i));
}*/
