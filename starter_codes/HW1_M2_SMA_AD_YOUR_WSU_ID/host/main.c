
#include <err.h>
#include <stdio.h>
#include <string.h>

/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <sma_ad_YOUR_WSU_ID_ta.h>

#include <stdint.h>	/* for uint64 definition */
#include <stdlib.h> /* for random number generation */
#include <time.h>	/* for clock_gettime */
// srand(time(0)); //current time as seed of random number generator

#define BILLION 1000000000L


//this will generate random number in range lo and hi
int get_random_in_range(int lo, int hi) {
      return (rand() % (hi - lo + 1)) + lo;
}


void milestone_2()
{
  TEEC_Result res;
	TEEC_Context ctx;
	TEEC_Session sess;
	TEEC_Operation op;
	TEEC_UUID uuid = TA_SMA_AD_YOUR_WSU_ID_UUID;
	uint32_t err_origin;

	// write your code here

}

int main(void)
{
  // write your code here
  //milestone_2();

}
