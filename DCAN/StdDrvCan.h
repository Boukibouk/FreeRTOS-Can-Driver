


#if !defined(_STD_DRV_CAN_)
#define _STD_DRV_CAN_


typedef uint8 CanReturn; 

/* DCAN defintion */
struct CanCell
{
	uint32 DCAN_CTL;
	uint32 DCAN_ES;
	uint32 DCAN_ERRC;
	uint32 DCAN_BTR;
	uint32 DCAN_INT;
	uint32 DCAN_TEST;
	uint32 DCAN_PERR;
	uint32 DCAN_REL;
	uint32 Unused[2];
	uint32 DCAN_PERR;
	uint32 DCAN_REL;
	uint32 Unused[8];
	uint32 DCAN_RAM_INIT;
	uint32 Unused[2];
	uint16 Unused[1];
	uint32 DCAN_GLB_INT_EN;
	uint32 DCAN_GLB_INT_FLAG;
	uint32 DCAN_GLB_INT_CLR;
	uint32 Unused[7];
	uint32 DCAN_ABORT;
	uint32 DCAN_TXRQ_X;
	uint32 DCAN_TXRQ_21;
	uint32 Unused[2];
	uint16 Unused[1];
	uint32 DCAN_NDAT_X;
	uint32 DCAN_NDAT_21;
	uint32 Unused[2];
	uint16 Unused[1];
	uint32 DCAN_IPEN_X;
	uint32 DCAN_IPEN_21;
	uint32 Unused[2];
	uint16 Unused[1];
	uint32 DCAN_MVAL_X;
	uint32 DCAN_MVAL_21;
	uint32 Unused[3];
	uint16 Unused[1];
	uint32 DCAN_IP_MUX21;
	uint32 Unused[7];
	uint32 DCAN_IF1CMD;
	uint32 DCAN_IF1MSK;
	uint32 DCAN_IF1ARB;
	uint32 DCAN_IF1MCTL;
	uint32 DCAN_IF1DATA_A;
	uint32 DCAN_IF1DATA_B;
	uint32 Unused[3];
	uint32 DCAN_IF2CMD;
	uint32 DCAN_IF2MSK;
	uint32 DCAN_IF2ARB;
	uint32 DCAN_IF2MCTL;
	uint32 DCAN_IF2DATA_A;
	uint32 DCAN_IF2DATA_B;
	uint32 Unused[3];
	uint32 DCAN_IF3OBS;
	uint32 DCAN_IF3MSK;
	uint32 DCAN_IF3ARB;
	uint32 DCAN_IF3MCTL;
	uint32 DCAN_IF3DATA_A;
	uint32 DCAN_IF3DATA_B;
	uint32 DCAN_IF3UPD;		
};
typedef struct CanCell CanCell;

enum BaudrateValue
{
	BD_83 = 83, BD_100 = 100, BD_250 = 250, BD_500 = 500, BD_1000 = 1000
};



/*
 Need to define which return value is related to what

 */

/* TODO 
-define the user structure for passing to the driver
the information for initialisation, Rx, Transmit MB 

-Structure initisalisation contening 
	Baudrate
*/

/*
need to define the assert function 

 */


#endif /* _STD_DRV_CAN_ */