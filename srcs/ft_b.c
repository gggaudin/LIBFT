/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaudin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:41:12 by ggaudin-          #+#    #+#             */
/*   Updated: 2017/11/27 13:31:12 by ggaudin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_b(int i, const char *s)
{
	if (i == 1)
	{
		ft_putstr("ok dans la fonction ");
		ft_putendl(s);
	}
	else if (i == 2)
	{
		ft_putstr("debut de la fonction ");
		ft_putendl(s);
	}
	else if (i == 3)
	{
		ft_putstr("fin de la fonction ");
		ft_putendl(s);
	}
	else
		return ;
}
