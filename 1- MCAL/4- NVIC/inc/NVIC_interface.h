/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Ahmed Mohamed Mohamed Hassanien        *************/
/**************************		Date:    31 JULY 2023	           		 		*************/
/**************************		Layer:   MCAL								   	*************/
/**************************		SWC:	 NVIC									*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/

/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_






void NVIC_vEnableInterrupt(Interrupt_t copy_eInterrupt);
void NVIC_vDisableInterrupt(Interrupt_t copy_eInterrupt);
void NVIC_vSetPendingFlag(Interrupt_t copy_eInterrupt);
void NVIC_vClearPendingFlag(Interrupt_t copy_eInterrupt);
void NVIC_vGetActiveFlag(Interrupt_t copy_eInterrupt, uint8_t *copy_u8flagStatus);

void NVIC_vSetPriorityCfg(NVIC_GroupPriorityCfg copy_eGroupPriorityCfg);
void NVIC_vSetInterruptPriority(Interrupt_t copy_eInterrupt,uint8_t copy_u8Priority);



#endif
/********************************************************************************************/
/* END OF FILE: NVIC_interface.h                                                               */
/********************************************************************************************/