/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 19:32:05 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/11 13:44:07 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_base(char *base)
{
	int s;
	int j;

	s = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[s])
	{
		j = s + 1;
		if (base[s] == '+' || base[s] == '-')
			return (0);
		while (base[j])
		{
			if (base[s] == base[j])
				return (0);
			j++;
		}
		s++;
	}
	return (s);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbnb;
	int		arrsize;

	nbnb = nbr;
	arrsize = ft_base(base);
	if (arrsize != 0)
	{
		if (nbnb < 0)
		{
			ft_putchar('-');
			nbnb = -nbnb;
		}
		if (nbnb >= arrsize)
		{
			ft_putnbr_base(nbnb / arrsize, base);
			ft_putnbr_base(nbnb % arrsize, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
