#ifndef __FILESTAT_H__
#define __FILESTAT_H__ 1

#include "config.h"

#if defined(FILE_STAT)

#include "driver.h"

#define FSTAT_READ  0
#define FSTAT_WRITE 1
#define FSTAT_DEL   2
#define FSTAT_COMP  3
#define FSTAT_INCL  4
#define FSTAT_SAVE  5
#define FSTAT_REST  6
#define FSTAT_TOTAL 7
#define FSTAT_MAX   8

extern void init_filestat (void);
extern void fstat_count (char * filename, int type);
extern void fstat_status (void);
extern void count_fstat_refs (void);

#define FCOUNT_READ(name)  fstat_count((name), FSTAT_READ)
#define FCOUNT_WRITE(name) fstat_count((name), FSTAT_WRITE)
#define FCOUNT_DEL(name)   fstat_count((name), FSTAT_DEL)
#define FCOUNT_COMP(name)  fstat_count((name), FSTAT_COMP)
#define FCOUNT_INCL(name)  fstat_count((name), FSTAT_INCL)
#define FCOUNT_SAVE(name)  fstat_count((name), FSTAT_SAVE)
#define FCOUNT_REST(name)  fstat_count((name), FSTAT_REST)

#else

#define FCOUNT_READ(name) 
#define FCOUNT_WRITE(name)
#define FCOUNT_DEL(name)  
#define FCOUNT_COMP(name) 
#define FCOUNT_INCL(name) 
#define FCOUNT_SAVE(name)
#define FCOUNT_REST(name)

#endif /* FILE_STAT */

#endif /* __FILE_STAT_H__ */


