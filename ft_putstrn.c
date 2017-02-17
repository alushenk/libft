/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 11:36:40 by alushenk          #+#    #+#             */
/*   Updated: 2017/02/15 11:36:44 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrn(char const *s, int n)
{
	if (s)
	{
		while (n--)
		{
			ft_putchar(*s);
			s++;
		}
	}
}
