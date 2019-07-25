/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 15:09:22 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 18:40:57 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *dest;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	if (!(dest = malloc(sizeof(int) * len)))
		return (-1);
	while (i != len)
	{
		dest[i] = min;
		i++;
		min++;
	}
	*range = dest;
	return (len);
}
