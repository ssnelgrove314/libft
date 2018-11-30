/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:51:40 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/11/28 17:52:52 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int				stack_empty(t_stack *stack)
{
	return (stack->top < 0);
}

int				stack_full(t_stack *stack)
{
	return (stack->top >= stack->max_size - 1);
}
