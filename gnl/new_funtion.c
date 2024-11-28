/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_funtion.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:53:55 by biniesta          #+#    #+#             */
/*   Updated: 2024/11/14 18:57:57 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*free_and_join(char *save, char *read)
{
	char	*join;

	join = ft_strcat(save, read);
	free(save);
	return (join);
}
char	*create_line(char *save)
{
	char	*line;
	int		i;

	i = 0;
	if (save[i] == '\0')
		return (NULL);
	while (save[i] != '\n' && save[i] != '\0')
		i++;
	line = ft_calloc(sizeof(char), i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (save[i] != '\n' && save[i] != '\0')
	{
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
		line[i] = '\n';
	return (line);
}
char	*put_rest(char *save)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	while (save[i] != '\n' && save[i] != '\0')
		i++;
	if (save[i] == '\0')
	{
		free(save);
		return (NULL);
	}
	rest = ft_calloc(sizeof(char), (ft_strlen(save) - i + 2));
	if (!rest)
		return (NULL);
	i++;
	j = 0;
	while (save[i] != '\0')
		rest[j++] = save[i++];
	rest[j] = '\0';
	free(save);
	return (rest);
}
char	*read_file(int fd, char *save)
{
	char	*new_read;
	int		len;

	if (!save)
		save = ft_calloc(1, 1);
	new_read = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!new_read)
		return (NULL);
	len = 1;
	while (len > 0)
	{
		len = read(fd, new_read, BUFFER_SIZE);
		if (len == -1)
		{
			free(new_read);
			free(save);
			return (NULL);
		}
		new_read[len] = '\0';
		save = free_and_join(save, new_read);
		if (ft_strchar(save, '\n'))
			break ;
	}
	free(new_read);
	return (save);
}

char	*get_next_line(int fd)
{
	char *line;
	static char *save;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	save = read_file(fd, save);
	if (!save)
		return (NULL);
	line = create_line(save);
	save = put_rest(save);
	return (line);
}