/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 20:18:44 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/25 23:24:31 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"
#include <unistd.h>

#define BUFFER_SIZE		4096

void	ft_display_file(char *file_name)
{
	int		fd;
	int		reader;
	char	buf[BUFFER_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return ;
	while ((reader = read(fd, buf, BUFFER_SIZE)) > 0)
		write(1, buf, reader);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc > 2 || argc == 1)
		return (1);
	ft_display_file(argv[1]);
	return (0);
}
