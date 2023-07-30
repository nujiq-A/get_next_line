/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qang <qang@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:36:22 by qang              #+#    #+#             */
/*   Updated: 2023/05/23 12:26:50 by qang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*temp;
	size_t			n;

	n = nitems * size;
	if (n < nitems || n < size)
		return (NULL);
	temp = (void *)malloc(n);
	if (!temp)
		return (NULL);
	while (n--)
		*((unsigned char *)temp + n) = 0;
	return (temp);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*temp;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	temp = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!temp)
		return (NULL);
	while (s1[x])
	{
		temp[x] = s1[x];
		x++;
	}
	while (s2[y])
		temp[x++] = s2[y++];
	return (temp);
}

int	ft_strchr(char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
