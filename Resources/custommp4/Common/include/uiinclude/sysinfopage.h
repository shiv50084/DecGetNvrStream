#ifndef _SYSINFOPAGE_H_
#define _SYSINFOPAGE_H_

#include "ui.h"

#define IDC_STATIC_SYSINFO_DEVICENAME		IDD_DIALOG_SYSINFO+1
#define IDC_STATIC_SYSINFO_MODEL			IDD_DIALOG_SYSINFO+2
//#define IDC_STATIC_SYSINFO_SN				IDD_DIALOG_SYSINFO+3
#define IDC_STATIC_SYSINFO_VERSION			IDD_DIALOG_SYSINFO+4

#define IDC_STATIC_SYSINFO_DEVICENAME_VALUE	IDD_DIALOG_SYSINFO+5
#define IDC_STATIC_SYSINFO_MODEL_VALUE		IDD_DIALOG_SYSINFO+6
//#define IDC_STATIC_SYSINFO_SN_VALUE		IDD_DIALOG_SYSINFO+7
#define IDC_STATIC_SYSINFO_VERSION_VALUE	IDD_DIALOG_SYSINFO+8

#define IDC_BUTTON_SYSINFO_OK				IDD_DIALOG_SYSINFO+9

BOOL CreateSysinfoPage();
BOOL ShowSysinfoPage();


#endif
