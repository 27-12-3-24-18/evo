/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapaydin <sapaydin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:08:08 by sapaydin          #+#    #+#             */
/*   Updated: 2024/07/09 17:25:39 by sapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}
