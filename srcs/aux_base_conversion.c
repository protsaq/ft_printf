/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_base_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto <apinto@student.42lisboa.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:27:09 by apinto            #+#    #+#             */
/*   Updated: 2021/03/24 11:54:54 by apinto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	number_to_string(t_info *tr, unsigned int content, char *base)
{
	int			len_of_base;
	char		*res;
	char		digit;
	char		*begg;

	res = ft_calloc(20, sizeof(char));
	if (!res)
		return;
	begg = res;
	len_of_base = strlen(base);
	while (content != 0)
	{
		digit = base[content % len_of_base];
		*(res++) = digit;
		content = content / len_of_base;
	}
	res = ft_reallocates_memory(strrev(begg), strlen(begg), 1, 0);
	tr->content = begg;
	tr->len = strlen(begg);
}
