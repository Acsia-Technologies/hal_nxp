#include "s32_core_cm4.h"
#include <stdbool.h>

static inline void DevAssert(volatile bool x)
{
    if(x) { } else { BKPT_ASM; for(;;) {} }
}
    #define DEV_ASSERT(x) DevAssert(x)

