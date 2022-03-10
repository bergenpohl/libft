/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpohl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 17:17:23 by bpohl             #+#    #+#             */
/*   Updated: 2020/04/16 17:24:08 by bpohl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long long	i;
	int			n;

	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	n = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		i *= 10;
		i += (*str - '0');
		++str;
	}
	if (i >= 9223372036854775808ULL)
		return (n == 1 ? -1 : 0);
	return (((int)i) * n);
}
