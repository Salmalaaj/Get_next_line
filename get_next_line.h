/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmalaajouri <salmalaajouri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 06:50:29 by slaajour          #+#    #+#             */
/*   Updated: 2024/08/11 21:49:01 by salmalaajou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strchr(char *str);
char	*ft_substr(char *salma, int start, int len);
int		ft_strlen(char *s);
char	*ft_strdup(char *c);
char	*ft_strjoin(char *s1, char *s2);
char	*befl(char *str, int c);
char	*afterline(char *str, char v);

#endif 
