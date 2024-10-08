/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmalaajouri <salmalaajouri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:06:00 by slaajour          #+#    #+#             */
/*   Updated: 2024/08/11 21:48:38 by salmalaajou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *c)
{
	char	*var;
	int		i;

	var = malloc(sizeof(char) * ft_strlen(c) + 1);
	if (var == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(c))
	{
		var[i] = c[i];
		i++;
	}
	var[i] = '\0';
	return (var);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	int		i;

	if (!s1)
		s1 = ft_strdup("");
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		s3[i] = s1[i];
	i = -1;
	while (s2[++i] != '\0')
		s3[i + ft_strlen(s1)] = s2[i];
	s3[i + ft_strlen(s1)] = '\0';
	free (s1);
	return (s3);
}

int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_substr(char *salma, int start, int len)
{
	int		i;
	char	*rm;
	int		j;

	if (start >= len)
		len = 0;
	i = 0;
	while (i < len)
		i++;
	rm = malloc(sizeof(char) * i + 1);
	j = 0;
	while (j < i)
		rm[j++] = salma[start++];
	rm[j] = '\0';
	return (rm);
}
