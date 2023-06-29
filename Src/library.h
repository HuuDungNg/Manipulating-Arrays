/*
 * library.h
 *
 *  Created on: Jun 29, 2023
 *      Author: Dung
 */

#ifndef SRC_LIBRARY_H_
#define SRC_LIBRARY_H_

/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------------------------------*/
/* macro                                                                      */
/*----------------------------------------------------------------------------*/
#define MAX     100

/*----------------------------------------------------------------------------*/
/* function definiton                                                         */
/*----------------------------------------------------------------------------*/
void create_Array(uint32_t *ptr_size, uint32_t *arr);
void print_Array(uint32_t *ptr_size, uint32_t *arr);
void insert_End_Element(uint32_t *ptr_size, uint32_t *arr);
void delete_Element(uint32_t *ptr_size, uint32_t *arr);
void sort_Increase_Array(uint32_t *ptr_size, uint32_t *arr);
void sort_Decrease_Array(uint32_t *ptr_size, uint32_t *arr);
void find_Number(uint32_t *ptr_size, uint32_t *arr);
void welcome(void);
void goodbye(void);
#endif /* SRC_LIBRARY_H_ */
