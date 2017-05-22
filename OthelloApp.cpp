//---------------------------------------------------------------------------
//
// Name:        OthelloApp.cpp
// Author:      usuari
// Created:     22/05/2017 15:02:25
// Description: 
//
//---------------------------------------------------------------------------

#include "OthelloApp.h"
#include "OthelloFrm.h"

IMPLEMENT_APP(OthelloFrmApp)

bool OthelloFrmApp::OnInit()
{
    OthelloFrm* frame = new OthelloFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int OthelloFrmApp::OnExit()
{
	return 0;
}
