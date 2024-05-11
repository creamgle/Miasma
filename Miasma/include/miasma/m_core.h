#pragma once

#ifdef _WIN32
	/* Windows x64/x86 */
	#ifdef _WIN64
		/* Windows x64  */
		#define M_PLATFORM_WINDOWS
	#else
		/* Windows x86 */
		#error "x86 Builds are not supported!"
	#endif
#endif

#ifdef M_PLATFORM_WINDOWS
    #ifdef M_EXPORT
        #define MAPI __declspec(dllexport)
    #else
        #define MAPI __declspec(dllimport)
    #endif
#endif

typedef enum LogLevel {
    LOG_LEVEL_FATAL,
    LOG_LEVEL_ERROR,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_INFO,
    LOG_LEVEL_DEBUG
} LogLevel;

MAPI void log_output(LogLevel level, const char *message, ...);