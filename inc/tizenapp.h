#ifndef __tizenapp_H__
#define __tizenapp_H__

#include <app.h>
#include <Elementary.h>
#include <system_settings.h>
#include <efl_extension.h>
#include <dlog.h>

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "tizenapp"

#if !defined(PACKAGE)
#define PACKAGE "org.example.tizenapp"
#endif

#endif /* __tizenapp_H__ */
