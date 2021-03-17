/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto <apinto@student.42lisboa.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:17:09 by apinto            #+#    #+#             */
/*   Updated: 2021/03/17 17:18:36 by apinto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strindex(char *str, char c)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return i;
	return -1;
}
