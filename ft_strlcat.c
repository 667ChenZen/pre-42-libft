/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:36:28 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/30 12:36:28 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *dst)
{
    int i;

    i = 0;
    while (dst[i])
        i++;
    return (i);
}

int ft_strlcat(char *dst, char *src, int size)
{
    int i;
    int j;
    int initial_len;
    
    i = ft_strlen(dst);
    j = 0;
    initial_len = i;

    if (size <= i)
        return (size + ft_strlen(src));

    while (src[j] && i + 1 < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    if (i < size)
        dst[i] = '\0';

    return (initial_len + ft_strlen(src));
}