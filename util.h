#ifndef __UTIL_HEADER__
#define __UTIL_HEADER__

#include "ds3.h"

#ifdef DS3_LOG
#define LOG 0==0
#else
#define LOG 0==1
#endif

#define info(...) if(LOG) fprintf(stderr, __VA_ARGS__)

typedef struct {
    http_verb verb;
    char *path;
    size_t path_size;
    GHashTable * headers;
    GHashTable * query_params;
}_ds3_request;

#endif