/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strs_to_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: frde-sap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 19:16:57 by frde-sap     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 19:17:36 by frde-sap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src)
{
	char	*ab;
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (!(ab = (char*)malloc(sizeof(char) * l + 1)))
	{
		return (NULL);
	}
	while (src[i])
	{
		ab[i] = src[i];
		i++;
	}
	ab[i] = '\0';
	return (ab);
}

int					ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * ac + 1);
	if (tab == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].copy = malloc(sizeof(char) * ft_strlen(ft_strdup(av[i])));
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
