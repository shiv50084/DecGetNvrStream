#ifndef _RECORDSETPAGE_H_
#define _RECORDSETPAGE_H_

#include "ui.h"

#define IDC_STATIC_RECORDSET_CHANNELINDEX          IDD_DIALOG_RECORDSET+1
#define IDC_COMBO_RECORDSET_CHANNELINDEX           IDD_DIALOG_RECORDSET+2

#define IDC_STATIC_RECORDSET_CHANNELNAME		   IDD_DIALOG_RECORDSET+3
#define IDC_EDIT_RECORDSET_CHANNELNAME             IDD_DIALOG_RECORDSET+4

#define IDC_STATIC_RECORDSET_STREAMTYPE			   IDD_DIALOG_RECORDSET+5
#define IDC_COMBO_RECORDSET_STREAMTYPE			   IDD_DIALOG_RECORDSET+6

#define IDC_STATIC_RECORDSET_RESOUTION		       IDD_DIALOG_RECORDSET+7
#define IDC_COMBO_RECORDSET_RESOUTION              IDD_DIALOG_RECORDSET+8

#define IDC_STATIC_RECORDSET_BITRATETYPE		   IDD_DIALOG_RECORDSET+9
#define IDC_COMBO_RECORDSET_BITRATETYPE            IDD_DIALOG_RECORDSET+10

#define IDC_STATIC_RECORDSET_BITRATE		       IDD_DIALOG_RECORDSET+11
#define IDC_COMBO_RECORDSET_BITRATE                IDD_DIALOG_RECORDSET+12

#define IDC_STATIC_RECORDSET_IMAGEQUALITY		   IDD_DIALOG_RECORDSET+13
#define IDC_COMBO_RECORDSET_IMAGEQUALITY		   IDD_DIALOG_RECORDSET+14

#define IDC_STATIC_RECORDSET_FRAMERATE		       IDD_DIALOG_RECORDSET+15
#define IDC_COMBO_RECORDSET_FRAMERATE			   IDD_DIALOG_RECORDSET+16

#define IDC_STATIC_RECORDSET_PRERECORDTIME		   IDD_DIALOG_RECORDSET+17
#define IDC_COMBO_RECORDSET_PRERECORDTIME		   IDD_DIALOG_RECORDSET+18

#define IDC_STATIC_RECORDSET_RECORDDELAYTIME	   IDD_DIALOG_RECORDSET+19
#define IDC_COMBO_RECORDSET_RECORDDELAYTIME		   IDD_DIALOG_RECORDSET+20

#define IDC_STATIC_RECORDSET_ENABLERECORD	       IDD_DIALOG_RECORDSET+21
#define IDC_CHECK_RECORDSET_ENABLERECORD		   IDD_DIALOG_RECORDSET+22
#define IDC_BUTTON_RECORDSET_ENABLERECORD		   IDD_DIALOG_RECORDSET+23

#define IDC_STATIC_RECORDSET_COPY	               IDD_DIALOG_RECORDSET+24
#define IDC_COMBO_RECORDSET_COPY	               IDD_DIALOG_RECORDSET+25
#define IDC_BUTTON_RECORDSET_COPY	               IDD_DIALOG_RECORDSET+26

#define IDC_BUTTON_RECORDSET_OK					   IDD_DIALOG_RECORDSET+27
#define IDC_BUTTON_RECORDSET_CANCEL	               IDD_DIALOG_RECORDSET+28

#define IDC_STATIC_RECORDSET_PICSWITCH			   IDD_DIALOG_RECORDSET+29
#define IDC_COMBO_RECORDSET_PICSWITCH	           IDD_DIALOG_RECORDSET+30

#define IDC_STATIC_RECORDSET_SUBSTREAM		       IDD_DIALOG_RECORDSET+31 // wrchen 080624
#define IDC_COMBO_RECORDSET_SUBSTREAM_FRAMERATE			   IDD_DIALOG_RECORDSET+32
#define IDC_COMBO_RECORDSET_SUBSTREAM_BITRATE                IDD_DIALOG_RECORDSET+33
#define IDC_PROGRESS_RECORDSET_COMPART                IDD_DIALOG_RECORDSET+34
#define IDC_COMBO_RECORDSET_SUBSTREAM_CTRL			   IDD_DIALOG_RECORDSET+35
#define IDC_STATIC_RECORDSET_SUBSTREAM_FRAMERATE		       IDD_DIALOG_RECORDSET+36
#define IDC_STATIC_RECORDSET_SUBSTREAM_BITRATE		       IDD_DIALOG_RECORDSET+37

#define IDC_STATIC_RECORDSET_STREAMINDEX  IDD_DIALOG_RECORDSET+38
#define IDC_COMBO_RECORDSET_STREAMINDEX	IDD_DIALOG_RECORDSET+39

#define IDC_STATIC_RECORDSET_SUBSTREAM_DEFINITION		       IDD_DIALOG_RECORDSET+40
#define IDC_COMBO_RECORDSET_SUBSTREAM_DEFINITION			   IDD_DIALOG_RECORDSET+41

#define IDC_BUTTON_RECORDSET_AUTOSET					   IDD_DIALOG_RECORDSET+42

//pw 2010/9/14
#define IDC_STATIC_CHN_NAME				IDD_DIALOG_RECORDSET+43
#define IDC_CHECKBOX_CHN_NAME				IDD_DIALOG_RECORDSET+44
#define IDC_STATIC_TIME						IDD_DIALOG_RECORDSET+45
#define IDC_CHECKBOX_TIME					IDD_DIALOG_RECORDSET+46

BOOL CreateRecordSetPage();
BOOL ShowRecordSetPage();

/*
void OnRecordSetOK(Wnd* pWnd,Message_event event,s32 param);
void OnRecordSetCancel(Wnd* pWnd,Message_event event,s32 param);

void OnRecordSetEnable(Wnd* pWnd,Message_event event,s32 param);
void OnRecordSetSet(Wnd* pWnd,Message_event event,s32 param);
void OnRecordSetBitRateType(Wnd* pWnd,Message_event event,s32 param);
void OnRecordSetChannelIndex(Wnd* pWnd,Message_event event,s32 param);
void OnRecordSetChannelName(Wnd* pWnd,Message_event event,s32 param);
*/

#endif

