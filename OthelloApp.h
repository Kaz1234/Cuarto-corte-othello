//---------------------------------------------------------------------------
//
// Name:        OthelloApp.h
// Author:      usuari
// Created:     22/05/2017 15:02:25
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __OTHELLOFRMApp_h__
#define __OTHELLOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class OthelloFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
