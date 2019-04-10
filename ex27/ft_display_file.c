/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:59:47 by idsy              #+#    #+#             */
/*   Updated: 2019/04/10 18:58:50 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i],fd);
		i++;
	}
}

int		ft_display_file(char **av)
{
	int		fd;
	char	buf[BUF_SIZE];

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() had an error",2);
		return (1);
	}
	while (read(fd, buf, BUF_SIZE) > 0)
		write(1, &buf, 1);
	if (close(fd) == -1)
	{
		ft_putstr("close() had an error",2);
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 2)
		ft_putstr("Too many arguments.\n",2);
	else if (ac < 2)
		ft_putstr("File name missing.\n",2);
	else if (ac == 2)
		ft_display_file(av);
	return (0);
}
