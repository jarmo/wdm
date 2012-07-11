#include <stdio.h>
#include <tchar.h>

#include <Windows.h>
#include <ruby.h>
#include <ruby/encoding.h>

#ifndef WDM_GLOBAL_H
#define WDM_GLOBAL_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// ---------------------------------------------------------
// Constants
// ---------------------------------------------------------

#define WDM_DEBUG_ENABLED TRUE

#define	WDM_BUFFER_SIZE 16384 // 2^14 or 16Kb

// ---------------------------------------------------------
// Macros
// ---------------------------------------------------------

#if WDM_DEBUG_ENABLED == TRUE
	#define WDM_DEBUG(str, ...) \
		fprintf(stderr, "[DEBUG] (%s@%d): " str "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
	#define WDM_DEBUG(str, ...)
#endif

// ---------------------------------------------------------

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // WDM_GLOBAL_H