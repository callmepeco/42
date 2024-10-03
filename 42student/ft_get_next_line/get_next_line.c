/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho- <fcoelh-@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:34 by fcoelho-          #+#    #+#             */
/*   Updated: 2024/10/03 15:10:58 by fcoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//read()
//static variables
//open()

// 1. **First Call:**
//    - We allocate memory for `buffer` and read from the file.
//    - We extract the first line and return it.
//    - Any leftover data stays in `buffer`.

// 2. **Subsequent Calls:**
//    - `buffer` still contains the leftover data from last time.
//    - We start by checking if there's a complete line in `buffer`.
//    - If not, we read more from the file and append to `buffer`.
//    - We extract the next line and update `buffer` again.

// 3. **Last Call:**
//    - We've reached the end of the file.
//    - We return any remaining data in `buffer`.
//    - We free `buffer` and set it to NULL.

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *buffer[42];
	int	fd;
	size_t text_len;
	
	fd = open("peco.txt", O_RDONLY);
	if(fd == -1)
		return(-1);
	text_len = 1;
	while(text_len > 0)
		text_len = read(fd, buffer, BUFFER_SIZE);
	
	
}
