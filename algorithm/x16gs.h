#ifndef X16GS_H
#define X16GS_H

#include "miner.h"

extern int x16gs_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void x16gs_regenhash(struct work *work);

#endif /* X16GS_H */
