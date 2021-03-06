/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto <apinto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 04:05:17 by apinto            #+#    #+#             */
/*   Updated: 2021/04/07 04:07:35 by apinto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

# define TYPES "cspdiuxX"
# define DEC_BASE "0123456789"
# define HEX_BASE "0123456789abcdef"
# define BUFF_LEN 20

typedef struct s_info{
	int				zero;
	int				nbr_zeros;
	int				minus;
	int				width;
	int				prec;
	int				w_inp;
	int				p_inp;
	int				w_aster;
	int				p_aster;
	char			type;
	void			*content;
	char			chr;
	int				len;
	int				negative;
	int				invalid;
}				t_info;

int				ft_printf(const char *str, ...);
int				writes_chars(char *begg, char *str, int last);
void			initializes_info(t_info *info);
void			handles_conversion(va_list *pargs, char **str);
void			cleans_info_with_prios(t_info *info);
void			int_family_allocation(t_info *info,
					va_list *pargs, char *buffer);
void			char_family_allocation(t_info *info, va_list *pargs);
void			number_to_string(t_info *info,
					unsigned long long content, char *base, char *buffer);
void			writes_buffer(t_info *info);

#endif
