/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cases1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-fala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:55:31 by aal-fala          #+#    #+#             */
/*   Updated: 2025/05/05 01:55:31 by aal-fala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_chars(void)
{
	int	ft_len;
	int	std_len;

	ft_len = ft_printf("Char: %c\n", 'A');
	std_len = printf("Char: %c\n", 'A');
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
}

void	test_strings(void)
{
	int	ft_len;
	int	std_len;

	ft_len = ft_printf("String: %s\n", "Hello");
	std_len = printf("String: %s\n", "Hello");
	ft_printf("Len (ft): %d | Len (std): %d\n", ft_len, std_len);
}
