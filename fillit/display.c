/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otel-jac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 00:53:45 by otel-jac          #+#    #+#             */
/*   Updated: 2018/10/31 22:28:07 by otel-jac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_display(char grid[20][20])
{
	int i;
	int j;

	i = 0;
	while (grid[i][0] != '0')
	{
		j = 0;
		while (grid[i][j] != '0')
		{
			ft_putchar(grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}