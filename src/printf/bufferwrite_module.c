/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bufferwrite_module.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:42:25 by jkrause           #+#    #+#             */
/*   Updated: 2017/08/22 15:21:32 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char				*g_buffer;
int					g_buffersize;

/*
** Function: bufferwrite_module_write
** Return: 1
** Params: the input flag (unused) and the string to write
** Description: Writes "Write" to the g_buffer and updates the g_buffersize
*/

int					bufferwrite_module_write(t_input *input, char *write)
{
	int					size;

	size = ft_strlen(write);
	(void)input;
	if (g_buffersize < 1)
		g_buffer = ft_strnew(0);
	if (size == 0)
		g_buffer = ft_expandwrite(write, 1, g_buffer, &g_buffersize);
	else
		g_buffer = ft_expandwrite(write, size, g_buffer, &g_buffersize);
	return (1);
}

/*
** Function: bufferwrite_module_flush
** Return: 1
** Params: the input (unused) and nil (-2 for unrecoverable)
** Description: flushes the buffer and frees it up.
*/

int					bufferwrite_module_flush(t_input *input, void *nil)
{
	int					size;

	size = 0;
	(void)input;
	if ((int)(long long)nil == -2)
		return (g_buffersize);
	if ((int)(long long)nil != -1)
		write(1, g_buffer, g_buffersize);
	size = g_buffersize;
	g_buffersize = 0;
	if (size > 0)
		free(g_buffer);
	return (size);
}
