/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: Dung
 */

/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/
#include "library.h"

/*----------------------------------------------------------------------------*/
/* global variable                                                            */
/*----------------------------------------------------------------------------*/
uint32_t g_size = 0;
uint32_t *arr;
uint8_t g_option;

/******************************************************************************/
/* Name        : main                                                         */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* input       : none                                                         */
/* output      : none                                                         */
/* Note        : []                                                           */
/******************************************************************************/
int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);

    arr = malloc(MAX * sizeof(int));

    /* loop */
    while (1)
    {
        welcome();
        /* select option */
        printf("Select option: ");
        scanf("%s", &g_option);

        /* process */
        switch(g_option)
        {
        case 'c':
            create_Array(&g_size, arr);
            break;
        case 'p':
            print_Array(&g_size, arr);
            break;
        case 'i':
            insert_End_Element(&g_size, arr);
            break;
        case 'd':
            delete_Element(&g_size, arr);
            break;
        case 's':
            sort_Increase_Array(&g_size, arr);
            break;
        case 'x':
            sort_Decrease_Array(&g_size, arr);
            break;
        case 't':
            find_Number(&g_size, arr);
            break;
        case 'e':
            goodbye();
            free(arr);
            return EXIT_SUCCESS;
        default:
            printf("ERROR!!!");
            break;
        }
    }
}
