// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
// Windows ͷ�ļ�:
#include <windows.h>



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�


#define OUTPUT_DEBUG_INFO

#if (defined _DEBUG) || (defined OUTPUT_DEBUG_INFO)

void _DbgPrintW(const WCHAR* pszFormat, ...);
void _DbgPrintA(const char* pszFormat, ...);

#define DbgPrintW  _DbgPrintW
#define DbgPrintA _DbgPrintA
#else
void DbgPrintW(const WCHAR* pszFormat, ...) { do{}while(FALSE); }
void DbgPrintA(const char* pszFormat, ...) { do{}while(FALSE); }
#endif