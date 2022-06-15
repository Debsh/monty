nclude <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 *  * queue_node - adds a node to a stack_t stack in queue_node
 *   * @stack: stack head
 *    * @n: number of the node
 *     *
 *      * Return: newly created node, if memory allocation fails, the function will
 *       * return NULL.
 *        */
stack_t *queue_node(stack_t **stack, const int n)
{
