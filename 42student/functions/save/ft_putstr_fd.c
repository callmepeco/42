/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:02:12 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/06/02 20:56:58 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	
	if(!s)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
/* int main(void)
{
	char *s = "www.bacon.com";
	ft_putstr_fd(s, 1);
	return(0);
} */
