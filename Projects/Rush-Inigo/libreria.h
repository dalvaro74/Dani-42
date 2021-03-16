/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libreria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:55:09 by vguttenb          #+#    #+#             */
/*   Updated: 2021/03/14 20:52:19 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRERIA_H
# define LIBRERIA_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	*aver(char *dictname);
int		atua(unsigned int *arrow, char *str);
void	chop(unsigned int a, char *buf);
char	*revetoi(unsigned int a);
char	*busqueda(char *buf, char *to_find);
char	*captura(char *right);
void	preprint(unsigned int x, char *buf, int on);

#endif
