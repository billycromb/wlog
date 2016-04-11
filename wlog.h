#pragma once
#include <stdio.h>

#define WLOG__(file, format, ...) fprintf(file, "%s:%d " format "\n", \
__FILE__, __LINE__, ##__VA_ARGS__)
#define LOG(format, ...) WLOG__(stdout, format, ##__VA_ARGS__);
#define ELOG(format, ...) WLOG__(stderr, format, ##__VA_ARGS__);

#if defined(DEBUG)
#define DLOG(format, ...) LOG(format, ##__VA_ARGS__)
#define EDLOG(format, ...) ELOG(format, ##__VA_ARGS__)
#else
#define DLOG(format, ...)
#define EDLOG(format, ...)
#endif

