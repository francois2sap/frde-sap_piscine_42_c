/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 10:03:55 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 19:13:54 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
		if (nb % i != 0)
			i++;
		else
			return (0);
	return (1);
}
