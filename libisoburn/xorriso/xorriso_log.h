#ifndef __XORRISO_LOG_H_1E7C2807608BE5FA0E76787265D50FF7__
#define __XORRISO_LOG_H_1E7C2807608BE5FA0E76787265D50FF7__



#define XORRISO_LOG_ERROR              0
#define XORRISO_LOG_WARN               10
#define XORRISO_LOG_INFO               20
#define XORRISO_LOG_DEBUG              30
#define XORRISO_LOG_TRACE              40


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvariadic-macros"

#define XO_BACKTRACE_DEBUG(...)  do{ xo_back_trace(XORRISO_LOG_DEBUG,__FILE__,__LINE__,__VA_ARGS__); }while(0)
#define XO_DEBUG(...)       xo_log(XORRISO_LOG_DEBUG,__FILE__,__LINE__,__VA_ARGS__);
#define XO_BUFFER_DEBUG(ptr,size,...)  xo_buffer_log(XORRISO_LOG_DEBUG,__FILE__,__LINE__,(void*)(ptr),(int)(size),__VA_ARGS__);

#pragma GCC diagnostic pop





#endif /* __XORRISO_LOG_H_1E7C2807608BE5FA0E76787265D50FF7__ */
