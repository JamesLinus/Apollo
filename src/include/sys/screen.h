/*
** <screen.h>
**
*/

#ifndef _SYS_SCREEN_H
#define _SYS_SCREEN_H

#include <sys/init.h>
#include <sys/callback.h>
// x86
void vgaInit(void);
void vgaPutChar(char);
void vgaClear(void);

// Common
//                  putchar(char)		init()
void scrInit(char*, void_callback_char_t, void_callback_t);
void scrWrite(const char*);
void scrWriteHex(unsigned int n);
#endif
