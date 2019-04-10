/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:04:28 by idsy              #+#    #+#             */
/*   Updated: 2019/04/10 18:41:17 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	browse;

	if (min >= max)
		return (0);
	browse = 0;
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (0);
	while ((min + browse) < max)
	{
		range[browse] = min + browse;
		browse++;
	}
	return (range);
}
