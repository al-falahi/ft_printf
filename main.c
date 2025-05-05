/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-fala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:36:51 by aal-fala          #+#    #+#             */
/*   Updated: 2025/05/05 01:36:51 by aal-fala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_chars(void);
void	test_strings(void);
void	test_numbers(void);
void	test_hex_and_ptr(void);
void	test_percent(void);

int	main(void)
{
	test_chars();
	test_strings();
	test_numbers();
	test_hex_and_ptr();
	test_percent();
	return (0);
}
