#ifndef INC_BC_MODULE_CORE_H_
#define INC_BC_MODULE_CORE_H_

#include <stdint.h>

void bc_module_core_init();
void bc_module_core_sleep();
void bc_module_core_pll_enable();
void bc_module_core_pll_disable();
void bc_module_core_deep_sleep_disable(void);
void bc_module_core_deep_sleep_enable(void);
uint32_t bc_module_core_get_clk();
void bc_module_core_reset();

#endif // INC_BC_MODULE_CORE_H_
