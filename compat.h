#ifndef __COMPAT_H__
#define __COMPAT_H__

#ifdef WIN32

#include <winsock2.h>
#include <windows.h>
#include "winpthreads.h"


static inline void sleep(int secs)
{
	Sleep(secs * 1000);
}

enum {
	PRIO_PROCESS		= 0,
};

static inline int setpriority(int which, int who, int prio)
{
	/* FIXME - actually do something */
	return 0;
}

typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;

#endif /* WIN32 */

#endif /* __COMPAT_H__ */
