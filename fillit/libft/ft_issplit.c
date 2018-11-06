/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:09:11 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 21:10:14 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_issplit(char c)
{
	if ((c > 6 && c < 14) || c == ' ')
		return (1);
	return (0);
}
