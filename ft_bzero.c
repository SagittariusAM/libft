/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:55:55 by mzeggaf           #+#    #+#             */
/*   Updated: 2023/11/02 22:18:28 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	char	*bast;

	bast = (char *) b;
	while (n && *bast)
	{
		*bast = 0;
		bast++;
		n--;
	}
}