/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/02 18:47:34 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/03 19:44:28 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char x;
	char y;

	x = 'P';
	y = 'N';
	if (n >= 0)
	{
		ft_putchar(x);
	}
	else
	{
		ft_putchar(y);
	}
}
