/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/10 17:13:48 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 19:11:52 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power >= 1)
		return (nb * (ft_recursive_power(nb, power - 1)));
	if (power == 0)
		return (1);
	if (nb == 1 && power < 0)
		return (1);
	else
		return (0);
}
