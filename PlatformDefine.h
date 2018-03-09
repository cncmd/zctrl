/*
 * define
 */

#ifndef PLATFORMDEFINE_H_
#define PLATFORMDEFINE_H_

/***
 *web type
 */
#define __PLATFORM_CHEERP_TYPE__ 1
/***
 *x86 type
 */
#define __PLATFORM_X86_TYPE__ 0

/**
 *default is x86
 */

#ifndef __CHEERP_PLATFROM_H__
#define __CHEERP_PLATFROM_H__ __PLATFORM_X86_TYPE__
#endif

/***
 * weixin game
 */

#define PLATFORM_WEXIN_GAME 0x2

/***
 * custom game
 */
#define PLATFORM_CUSTOM_GAME 0x1

#ifndef __CURR_PLATFORM_H__
#define __CURR_PLATFORM_H__ PLATFORM_CUSTOM_GAME
#endif
#endif /* PLATFORMDEFINE_H_ */
