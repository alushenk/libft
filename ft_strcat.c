/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:47:08 by alushenk          #+#    #+#             */
/*   Updated: 2016/11/22 19:47:11 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ptr;

	ptr = s1;
	ptr += ft_strlen(s1);
	while (*s2)
		*(ptr++) = *(s2++);
	*ptr = '\0';
	return (s1);
}
