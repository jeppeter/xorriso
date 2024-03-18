
#ifndef __LOG_H_66785784070A12C7__
#define __LOG_H_66785784070A12C7__



#define LIBISOFS_LOG_ERROR              0
#define LIBISOFS_LOG_WARN               10
#define LIBISOFS_LOG_INFO               20
#define LIBISOFS_LOG_DEBUG              30
#define LIBISOFS_LOG_TRACE              40

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvariadic-macros"


#define LIBISOFS_BACKTRACE_ERROR(...)  do{ libisofs_back_trace(LIBISOFS_LOG_ERROR,__FILE__,__LINE__,__VA_ARGS__); }while(0)
#define LIBISOFS_ERROR(...)       libisofs_log(LIBISOFS_LOG_ERROR,__FILE__,__LINE__,__VA_ARGS__);
#define LIBISOFS_BUFFER_ERROR(ptr,size,...)  libisofs_buffer_log(LIBISOFS_LOG_ERROR,__FILE__,__LINE__,(void*)(ptr),(int)(size),__VA_ARGS__);

#define LIBISOFS_BACKTRACE_WARN(...)  do{ libisofs_back_trace(LIBISOFS_LOG_WARN,__FILE__,__LINE__,__VA_ARGS__); }while(0)
#define LIBISOFS_WARN(...)       libisofs_log(LIBISOFS_LOG_WARN,__FILE__,__LINE__,__VA_ARGS__);
#define LIBISOFS_BUFFER_WARN(ptr,size,...)  libisofs_buffer_log(LIBISOFS_LOG_WARN,__FILE__,__LINE__,(void*)(ptr),(int)(size),__VA_ARGS__);

#define LIBISOFS_BACKTRACE_INFO(...)  do{ libisofs_back_trace(LIBISOFS_LOG_INFO,__FILE__,__LINE__,__VA_ARGS__); }while(0)
#define LIBISOFS_INFO(...)       libisofs_log(LIBISOFS_LOG_INFO,__FILE__,__LINE__,__VA_ARGS__);
#define LIBISOFS_BUFFER_INFO(ptr,size,...)  libisofs_buffer_log(LIBISOFS_LOG_INFO,__FILE__,__LINE__,(void*)(ptr),(int)(size),__VA_ARGS__);


#define LIBISOFS_BACKTRACE_DEBUG(...)  do{ libisofs_back_trace(LIBISOFS_LOG_DEBUG,__FILE__,__LINE__,__VA_ARGS__); }while(0)
#define LIBISOFS_DEBUG(...)       libisofs_log(LIBISOFS_LOG_DEBUG,__FILE__,__LINE__,__VA_ARGS__);
#define LIBISOFS_BUFFER_DEBUG(ptr,size,...)  libisofs_buffer_log(LIBISOFS_LOG_DEBUG,__FILE__,__LINE__,(void*)(ptr),(int)(size),__VA_ARGS__);

#define LIBISOFS_BACKTRACE_TRACE(...)  do{ libisofs_back_trace(LIBISOFS_LOG_TRACE,__FILE__,__LINE__,__VA_ARGS__); }while(0)
#define LIBISOFS_TRACE(...)       libisofs_log(LIBISOFS_LOG_TRACE,__FILE__,__LINE__,__VA_ARGS__);
#define LIBISOFS_BUFFER_TRACE(ptr,size,...)  libisofs_buffer_log(LIBISOFS_LOG_TRACE,__FILE__,__LINE__,(void*)(ptr),(int)(size),__VA_ARGS__);

#pragma GCC diagnostic pop


int libisofs_back_trace(int level,char* file, int lineno,const char* fmt,...);
int libisofs_log(int level,const char* file,int lineno, const char* fmt,...);
int libisofs_buffer_log(int level, const char* file,int lineno,void* pbuf,int size,const char* fmt,...);

#endif /* __LOG_H_66785784070A12C7__ */

