/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:20:41 by jsabroso          #+#    #+#             */
/*   Updated: 2024/11/01 13:34:30 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_format(char const *str, va_list ap, int *count)
{
	if (*str == 'c')
		ft_pf_putchar(va_arg(ap, int));
	else if (*str == 's')
		ft_pf_putstr(va_arg(ap, char *));
	(*count)++;
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			ft_print_format(++str, ap, &count);
		else
		{
			ft_pf_putchar(*str);
			count++;
		}
		str++;
	}
	va_end(ap);
	return (count);
}
