/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbongiov <pbongiov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:42:57 by pbongiov          #+#    #+#             */
/*   Updated: 2025/05/11 18:37:51 by pbongiov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *str;

    str = (char *)malloc(BUFFER_SIZE * sizeof(char));
    while(*str != '\n')
    {
        read(fd, str,BUFFER_SIZE);
        if (*str)
        {
            printf("%s", str);
            str++;
        }
    }
    return (NULL);
}

int main(void)
{
    int fd = open("teste.txt", O_RDONLY);
    get_next_line(fd);
    return (0);
}