/*
 * Library.c
 *
 *  Created on: Jun 29, 2023
 *      Author: Dung
 */

/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/
#include "library.h"

/******************************************************************************/
/* Name        : create_Array                                                 */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void create_Array(uint32_t *ptr_size, uint32_t *arr)
{
    printf("----------------------Create the Array-------------------------\n");
    do
    {
        printf("Size of array (<100): ");
        scanf("%d", ptr_size);
    }
    while (*ptr_size > 100);
    for(uint32_t i = 0; i < *ptr_size; i++)
    {
        printf("Arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n--------------\n");
}

/******************************************************************************/
/* Name        : print_Array                                                  */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void print_Array(uint32_t *ptr_size, uint32_t *arr)
{
    printf("-----------------------Print the Array-------------------------\n");
    printf("Size of array is %d\n", *ptr_size);
    if(*ptr_size != 0)
    {
        for(uint32_t i = 0; i < *ptr_size; i++)
        {
            printf("Arr[%d] = %d\n", i, *(arr+i));
        }
    }
    else
    {
        printf(" Empty array!!!\n");
    }
    printf("\n--------------\n");

}

/******************************************************************************/
/* Name        : insert_End_Element                                           */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void insert_End_Element(uint32_t *ptr_size, uint32_t *arr)
{
    printf("--------------Insert a number to the end of Array--------------\n");
    (*ptr_size)++;
    printf("Arr[%d]= ", (*ptr_size) - 1);
    scanf("%d", &arr[(*ptr_size) - 1]);
    print_Array(ptr_size, arr);
}

/******************************************************************************/
/* Name        : delete_Element                                               */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void delete_Element(uint32_t *ptr_size, uint32_t *arr)
{
    printf("----------Delete the number at position of the Array-----------\n");
    uint32_t location;
    printf("Select element need to delete: ");
    scanf("%d", &location);
    if(location >= *ptr_size)
    {
        printf("This element is not exist\n");
    }
    else
    {
        for(uint32_t i = location; i < *ptr_size; i++)
        {
            *(arr + i) = *(arr + i + 1);
        }
        (*ptr_size)--;
    }
    print_Array(ptr_size, arr);
}

/******************************************************************************/
/* Name        : swap                                                         */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *a, uint32_t *b                                     */
/* output      : uint32_t *a, uint32_t *b                                     */
/* Note        : [local function]                                             */
/******************************************************************************/
void swap(uint32_t *a, uint32_t *b)
{
    uint32_t temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/******************************************************************************/
/* Name        : sort_Increase_Array                                          */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void sort_Increase_Array(uint32_t *ptr_size, uint32_t *arr)
{
    printf("---------------------Sort increase the Array-------------------\n");
    uint32_t min;
    for(uint32_t i = 0; i < (*ptr_size) - 1; i++)
    {
        min = i;
        for(uint32_t j = i+1; j < *ptr_size; j++)
        {
            if(*(arr + j) < *(arr + min))
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap((arr + i), (arr + min));
        }
    }
    print_Array(ptr_size, arr);
}

/******************************************************************************/
/* Name        : sort_Decrease_Array                                          */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void sort_Decrease_Array(uint32_t *ptr_size, uint32_t *arr)
{
    printf("----------------------Sort decrease the Array------------------\n");
    uint32_t max;
    for(uint32_t i = 0; i < (*ptr_size) - 1; i++)
    {
        max = i;
        for(uint32_t j = i+1; j < *ptr_size; j++)
        {
            if(*(arr + j) > *(arr + max))
            {
                max = j;
            }
        }
        if(max != i)
        {
            swap((arr + i), (arr + max));
        }
    }
    print_Array(ptr_size, arr);
}

/******************************************************************************/
/* Name        : find_Number                                                  */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : uint32_t *ptr_size, uint32_t *arr                            */
/* output      : uint32_t *ptr_size, uint32_t *arr                            */
/* Note        : []                                                           */
/******************************************************************************/
void find_Number(uint32_t *ptr_size, uint32_t *arr)
{
    printf("-----------------Find the position of a number-----------------\n");
    uint32_t number;
    uint32_t count = 0;
    printf("Select number need to find: ");
    scanf("%d", &number);
    for(uint32_t i = 0; i < *ptr_size; i++)
    {
        if(number == *(arr + i))
        {
            count++;
            printf("number is at %d position\n", i);
        }
    }
    if(count == 0)
    {
        printf("Not found %d in array\n", number);
    }
    printf("\n--------------\n");
}

/******************************************************************************/
/* Name        : welcome                                                      */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : none                                                         */
/* output      : none                                                         */
/* Note        : []                                                           */
/******************************************************************************/
void welcome(void)
{
    printf("             CHUONG TRINH QUAN LY DAY SO BANG MANG             \n");
    printf("GUIDE                                                          \n");
    printf("Keyword                                                        \n");
    printf("        'c' - Create Array                                     \n");
    printf("        'p' - Print Array                                      \n");
    printf("        'i' - Add a member to end of the Array                 \n");
    printf("        'd' - Delete a member at position k                    \n");
    printf("        's' - Sort array increase                              \n");
    printf("        'x' - Sort array decrease                              \n");
    printf("        't' - Find position of number in Array                 \n");
    printf("        'e' - Exit Program                                     \n");
}

/******************************************************************************/
/* Name        : goodbye                                                      */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : none                                                         */
/* output      : none                                                         */
/* Note        : []                                                           */
/******************************************************************************/
void goodbye(void)
{
    printf("\n*************************************************************\n");
    printf("                            FINISH                            ");
    printf("\n*************************************************************\n");
}
