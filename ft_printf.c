/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:20:41 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/27 12:10:49 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*static void	ft_select_format(char const *str, va_list ap, int *count)
{
	(void)ap;
	ft_pf_putchar(*str);
	(*count)++;
}
*/
int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (str)
	{
			// ft_select_format(++str, ap, &count);
		if (*str == '%')
			ft_pf_putchar(*str);
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
