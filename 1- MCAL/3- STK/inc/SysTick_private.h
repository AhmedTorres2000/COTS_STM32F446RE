/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Ahmed Mohamed Mohamed Hassanien        *************/
/**************************		Date:    27 JULY 2023	            			*************/
/**************************		Layer:   MCAL								   	*************/
/**************************		SWC:	 SYSTICK								*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/

/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef SYSTICK_PRIVATE_H_
#define SYSTICK_PRIVATE_H_


/* * * * * * * * * * * * * * * * * * * * * *
 * 				STK_CTRL Pins 		  	   *
 * * * * * * * * * * * * * * * * * * * * * */

enum {
	ENABLE,
	TICKINT,
	CLKSOURCE,
	COUNTFLAG = 16
};

/* * * * * * * * * * * * * * * * * * * * * *
 * 				STK_CALIB Pins 		  	   *
 * * * * * * * * * * * * * * * * * * * * * */

enum {
	TENMS0,
	SKEW = 30,
	NOREF = 31
};


#endif
/********************************************************************************************/
/* END OF FILE: Systick_private.h                                                           */
/********************************************************************************************/
