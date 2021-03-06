/*
 *  By Yang Xi <hiyangxi@gmail.com>.
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 */

#include <bsp.h>
#include <bsp/irq-generic.h>
#include <rtems/libcsupport.h>
#include <rtems/libio.h>
#include <pxa255.h>

void bsp_reset( void )
{
#if ON_SKYEYE == 1
  SKYEYE_MAGIC_ADDRESS = 0xff;
#endif
}
