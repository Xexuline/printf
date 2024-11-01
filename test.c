/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:22:32 by jsabroso          #+#    #+#             */
/*   Updated: 2024/11/01 13:34:22 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello, world \n");
	ft_printf("Hello, %corld\n", 'w');
	ft_printf("Hello, %s\n", "world");
	return (0);
}
