/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 13:41:56 by cdenys-a          #+#    #+#             */
/*   Updated: 2019/01/14 18:46:47 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

typedef struct	s_stor
{
	int				fd;
	char			*buf;
	int				b_read;
	int				b_add;
	struct s_stor	*next;
}				t_stor;

int				get_next_line(const int fd, char **line);

#endif
