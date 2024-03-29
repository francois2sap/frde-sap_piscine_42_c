/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 08:29:16 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 12:37:29 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] && ((str[i] >= 65 && str[i] <= 90) ||
	(str[i] >= 97 && str[i] <= 122)))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
