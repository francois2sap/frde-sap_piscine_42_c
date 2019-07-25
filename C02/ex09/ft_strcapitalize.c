/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 10:39:26 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 13:01:17 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	if ((str[i] >= 'a' && str[i] <= 'z') &&
	((str[i - 1] == ';') || (str[i - 1] == ' ') ||
	(str[i - 1] >= 33 && str[i - 1] <= 47)))
	{
		str[i] = str[i] - 32;
		i++;
	}
	else
		i++;
	return (str);
}
