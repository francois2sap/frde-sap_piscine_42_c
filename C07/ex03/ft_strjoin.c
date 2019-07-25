/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/18 18:27:48 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 18:30:11 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_strs(char **strs, int size)
{
	int i;
	int j;
	int taille;

	i = 0;
	j = 0;
	taille = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			taille++;
			j++;
		}
		i++;
		j = 0;
	}
	if (size == 0)
		return (1);
	return (taille);
}

int		ft_len_sep(char *sep)
{
	int taille;

	taille = 0;
	while (sep[taille])
	{
		taille++;
	}
	return (taille);
}

int		ft_test_size(int size)
{
	if (size == 0)
		return (0);
	else
		return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		i;
	int		let;
	int		y;

	i = -1;
	y = 0;
	if (ft_test_size(size) == 0)
		concat = malloc(sizeof(*concat));
	else
		concat = malloc(sizeof(*concat) * (ft_len_strs(strs, size)
					+ (ft_len_sep(sep) * (size - 1))));
	while (++i < size && size >= 1)
	{
		let = 0;
		while (strs[i][let])
			concat[y++] = strs[i][let++];
		let = 0;
		while (sep[let] && i < size - 1)
			concat[y++] = sep[let++];
	}
	concat[y] = '\0';
	return (concat);
}
