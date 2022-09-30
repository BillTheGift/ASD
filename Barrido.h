
// Barrido.h : main header file for the Barrido application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CBarridoApp:
// See Barrido.cpp for the implementation of this class
//

class CBarridoApp : public CWinApp
{
public:
	CBarridoApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBarridoApp theApp;
