//============================================================================
// Author      : 钟元OSS
// Mail        : agent.zy@aliyun.com
//============================================================================
#include "PlatformDefine.h"
#if __CHEERP_PLATFROM_H__ == __PLATFORM_CHEERP_TYPE__
/***
 * this mode can be compile by llvm in makefile.
 * and run it with node.js
 * webMain is the entry point.
 */
#include "CheerpPlatfromEntryPoint.h"
#else
/***
 * this mode can be compile by gcc in makefile.
 * and run it with native code
 * main is the entry point.
 */
#include "X86PlatformEntryPoint.h"
#endif



