/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:50:10 by pferrer-          #+#    #+#             */
/*   Updated: 2024/06/15 17:14:35 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limitis.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int	value;
	int	current_positiom;
	int	final_index;
	int	push_price;
	bool	above_median;
	bool	cheapest;
	struct	s_stack_node *target_node;
	struct	s_stack_node *next;
	struct	s_stack_node *prev;
}	t_stack_node;

#endif
