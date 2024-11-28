/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biniesta <biniesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:58:40 by biniesta          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:21 by biniesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"

// char	*free_and_join(char *rest, char *new_rest)
// {
// 	char	*new;

// 	new = ft_strcat(rest, new_rest);
// 	free(rest);
// 	return (new);
// }

// char	*create_newline(char *rest)
// {
// 	char		*line;
// 	int		i;

// 	i = 0;
// 	while (rest[i] != '\n' && rest[i] != '\0')
// 		i++;
// 	line = ft_calloc(sizeof(char), i + 2);
// 	if (!line)
// 		return (NULL);
// 	i = 0;
// 	while (rest[i] != '\n' && rest[i] != '\0')
// 	{
// 		line[i] = rest[i];
// 		i++;
// 	}
// 	if (rest[i] == '\n')
// 		line[i] = '\n';
// 	return (line);
// }

// char *put_rest(char *rest)
// {
// 	char *result;
// 	int i;
// 	int j;

// 	i = 0;
// 	while (rest[i] != '\n' && rest[i] != '\0')
// 		i++;
// 	if (rest[i] == '\0')
// 	{
// 		free(rest);
// 		return (NULL);
// 	}		
// 	result = ft_calloc((ft_strlen(rest) - i + 1), sizeof(char));
// 	if (!result)
// 		return (NULL);
// 	j = 0;
// 	while (rest[i + 1] != '\0')
// 		result[j++] = rest[i++];
// 	free(rest);
// 	return (result);
// }

// char	*read_file(int fd, char *rest)
// {
// 	int	len;
// 	char		*new_rest;

// 	if (!rest)
// 		rest = ft_calloc(1, 1);
// 	new_rest = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
// 	if (!new_rest) // error handling
// 		return (NULL);
// 	len = 1;
// 	while (len > 0)
// 	{
// 		len = read(fd, new_rest, BUFFER_SIZE);
// 		if (len <= 0) // error handling
// 		{
// 			free(rest);
// 			free(new_rest);
// 			return (NULL);
// 		}
// 		new_rest[len] = '\0';
// 		rest = free_and_join(rest, new_rest);
// 		if (ft_strchar(rest, '\n'))
// 			break ;
	
// 	}
// 	free(new_rest);
// 	return (rest);
// }

// char	*get_next_line(int fd)
// {
// 	char		*line;
// 	static char *rest;
	
// 	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0) // error handling
// 		return (NULL);
// 	rest = read_file(fd, rest);
// 	if (rest == NULL) // error handling
// 		return (NULL);
// 	line = create_newline(rest);
// 	rest = put_rest(rest);
// 	return (line);
// }
// // printf("fucniono hasta aqui\n");