/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 06:16:39 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/12 02:13:03 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter a link’s pointer address and frees the
** memory of the link’s content using the function del given as
** a parameter, then frees the link’s memory using free(3). The
** memory of next must not be freed under any circumstance.
** Finally, the pointer to the link that was just freed must be
** set to NULL (quite similar to the function ft_memdel in the
** mandatory part).
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
