
/*
 * The name of this file must not be modified
 */

#ifndef USER_TA_HEADER_DEFINES_H
#define USER_TA_HEADER_DEFINES_H

/* To get the TA UUID definition */
#include <HW1_M2_SMA_AD_YOUR_WSU_ID_ta.h>  // update with your WSU ID

#define TA_UUID				TA_SMA_AD_YOUR_WSU_ID_UUID  // update with your WSU ID

/*
 * TA properties: multi-instance TA, no specific attribute
 * TA_FLAG_EXEC_DDR is meaningless but mandated.
 */
#define TA_FLAGS			TA_FLAG_EXEC_DDR

/* Provisioned stack size */
#define TA_STACK_SIZE			(2 * 1024)

/* Provisioned heap size for TEE_Malloc() and friends */
#define TA_DATA_SIZE			(32 * 1024)

/* The gpd.ta.version property */
#define TA_VERSION	"1.0"

/* The gpd.ta.description property */
#define TA_DESCRIPTION	"SMA-AD-TA-CS898CD"

/* Extra properties */
#define TA_CURRENT_TA_EXT_PROPERTIES \
    { "sma_ta_YOUR_WSU_ID.property1", \
	USER_TA_PROP_TYPE_STRING, \
        "Some string" }, \
    { "sma_ta_YOUR_WSU_ID.property2", \
	USER_TA_PROP_TYPE_U32, &(const uint32_t){ 0x0010 } }

#endif /* USER_TA_HEADER_DEFINES_H */
