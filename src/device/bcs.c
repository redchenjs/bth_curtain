#include <msp430.h>
/*
 * bcs_init.c
 *
 *  Created on: 2016-3-22
 *      Author: redchenjs
 */
void bcs_init(void)
{
    DCOCTL  = CALDCO_16MHZ;
    BCSCTL1 = CALBC1_16MHZ;
}

