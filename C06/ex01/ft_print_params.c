/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_params.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 16:22:46 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 10:46:32 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i != ac)
	{
		while (*av[i])
			write(1, av[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
