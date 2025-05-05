/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cases2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-fala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:56:55 by aal-fala          #+#    #+#             */
/*   Updated: 2025/05/05 15:59:17 by aal-fala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_numbers(void)
{
	int	ft_len;
	int	std_len;

	ft_len = ft_printf("Decimal: %d\n", -42);
	std_len = printf("Decimal: %d\n", -42);
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
	ft_len = ft_printf("Unsigned: %u\n", 3000000000U);
	std_len = printf("Unsigned: %u\n", 3000000000U);
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
	ft_printf("TestNull (ft): %p\n", NULL);
	printf("TestNull (std): %p\n", NULL);
}

void	test_hex_and_ptr(void)
{
	int	ft_len;
	int	std_len;

	ft_len = ft_printf("Hex lower: %x\n", 48879);
	std_len = printf("Hex lower: %x\n", 48879);
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
	ft_len = ft_printf("Hex upper: %X\n", 48879);
	std_len = printf("Hex upper: %X\n", 48879);
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
	ft_len = ft_printf("Pointer: %p\n", (void *)0x1234abcd);
	std_len = printf("Pointer: %p\n", (void *)0x1234abcd);
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
}

void	test_percent(void)
{
	int	ft_len;
	int	std_len;

	ft_len = ft_printf("Percent: %%\n");
	std_len = printf("Percent: %%\n");
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
}
