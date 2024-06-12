/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listaspython.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:18:46 by pferrer-          #+#    #+#             */
/*   Updated: 2024/05/26 16:19:04 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
  int   num;
  char  letter;
  char  *str;
} t_list;

#include <stdlib.h>

int main() {
  int     i;
  
  char    c;
  char    *str;
  
  t_list  list;
  t_list  *dir_list;
  
  
  i = 0;
  c = 'g';
  str = &c;
  list.num = 15;
  list.letter = 'g';
  list.str = "hola" + 2;
  
  dir_list = &list;
  dir_list = malloc(sizeof(t_list));
  dir_list->num = 20;
  dir_list->letter = 'h';
  dir_list->str = "hola";
  
  
  return 0;
}
