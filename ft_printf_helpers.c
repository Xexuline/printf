/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:36:21 by jsabroso          #+#    #+#             */
/*   Updated: 2024/11/01 13:34:35 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_pf_putstr(char *str)
{
	while (*str)
		ft_pf_putchar(*str++);
}
