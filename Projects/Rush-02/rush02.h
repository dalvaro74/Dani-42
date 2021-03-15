/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:47:45 by dalvaro-          #+#    #+#             */
/*   Updated: 2021/03/13 19:49:13 by dalvaro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
#define RUSH01_H
int		check_neg(int num, int neg);
struct s_palabra
{
    char *key;
	char *value;
};
int ft_check_args(char *str);
int ft_read_diccionary(char *filename, char *cadena);
void ft_separate_rows(char *cadini, struct s_palabra *palabras);
#endif

