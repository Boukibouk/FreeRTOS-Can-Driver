/*
 
 DCAN Module defintion Written by Yacine for internal Testing of feature

 */


#if !defined(_CAN_H)
#define _CAN_H

#include "StdDrvCan.h"


#if defined(USE_GENERATE_FILE)

#error "Not Supported for the moment" 

/* Not supported for the moment  */
#include "Can_Cfg.h"
/*Generate file  the Configuration of the CAN drv */

/*

#if (CAN_TX_PROCESSING == POLLING )
#define TX_POLLING
#endif

#if (CAN_RX_PROCESSING == POLLING)
#define RX_POLLING
#endif

#if (CAN_TX_PROCESSING == INTERRUPT)
#define TX_INTERRUPT
#endif


#if (CAN_RX_PROCESSING == INTERRUPT)
#define RX_INTERRUPT
#endif

*/
#endif



/**
 * @brief      Initialize the Can driver
 * 			   Set the can cell into init mode
 * 			   Set the baudrate to the desirate value
 * 			   no Mailbox is configured at this point 	
 *				
 * @param[in]  Value of the Baudrate  
 */
CanReturn CanInit(BaudrateValue Value,RxMsgObject *RxMB, uint8 NumberMB);



#endif /* _CAN_H */