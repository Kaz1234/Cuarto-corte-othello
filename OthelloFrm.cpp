///-----------------------------------------------------------------
///
/// @file      OthelloFrm.cpp
/// @author    usuari
/// Created:   22/05/2017 15:02:25
/// @section   DESCRIPTION
///            OthelloFrm class implementation
///
///------------------------------------------------------------------

#include "OthelloFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// OthelloFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(OthelloFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(OthelloFrm::OnClose)
	EVT_MENU(ID_MNU_NUEVOJUEGO_1045, OthelloFrm::Mnunuevojuego1045Click)
	EVT_MENU(ID_MNU_SALIR_1046, OthelloFrm::Mnusalir1046Click)
	EVT_BUTTON(ID_WXBUTTON35,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON34,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON33,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON32,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON31,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON30,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON29,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON28,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON27,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON26,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON25,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON24,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON23,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON22,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON21,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON20,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON19,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON18,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON17,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON16,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON15,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON14,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON13,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON12,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON11,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON10,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON9,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON8,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON7,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON6,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON5,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON4,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON3,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON2,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_WXBUTTON1,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA,OthelloFrm::casillaClick)
END_EVENT_TABLE()
////Event Table End

OthelloFrm::OthelloFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

OthelloFrm::~OthelloFrm()
{
}

void OthelloFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxGridSizer1 = new wxGridSizer(0, 6, 0, 0);
	this->SetSizer(WxGridSizer1);
	this->SetAutoLayout(true);

	casilla = new wxButton(this, ID_CASILLA, _(""), wxPoint(1, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla"));
	casilla->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _(""), wxPoint(51, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _(""), wxPoint(101, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _(""), wxPoint(151, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton3"));
	WxButton3->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _(""), wxPoint(201, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton4"));
	WxButton4->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _(""), wxPoint(251, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton5"));
	WxButton5->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton5, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _(""), wxPoint(1, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton6"));
	WxButton6->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton6, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _(""), wxPoint(51, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton7"));
	WxButton7->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton7, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _(""), wxPoint(101, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton8"));
	WxButton8->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton8, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _(""), wxPoint(151, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton9"));
	WxButton9->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton9, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _(""), wxPoint(201, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton10"));
	WxButton10->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton10, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _(""), wxPoint(251, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton11"));
	WxButton11->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton11, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _(""), wxPoint(1, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton12"));
	WxButton12->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton12, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _(""), wxPoint(51, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton13"));
	WxButton13->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton13, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _(""), wxPoint(101, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton14"));
	WxButton14->SetBackgroundColour(wxColour(255,255,0));
	WxGridSizer1->Add(WxButton14, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _(""), wxPoint(151, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton15"));
	WxButton15->SetBackgroundColour(wxColour(255,128,64));
	WxGridSizer1->Add(WxButton15, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _(""), wxPoint(201, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton16"));
	WxButton16->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton16, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _(""), wxPoint(251, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton17"));
	WxButton17->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton17, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _(""), wxPoint(1, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton18"));
	WxButton18->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton18, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _(""), wxPoint(51, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton19"));
	WxButton19->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton19, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _(""), wxPoint(101, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton20"));
	WxButton20->SetBackgroundColour(wxColour(255,128,64));
	WxGridSizer1->Add(WxButton20, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(""), wxPoint(151, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton21"));
	WxButton21->SetBackgroundColour(wxColour(255,255,0));
	WxGridSizer1->Add(WxButton21, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _(""), wxPoint(201, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton22"));
	WxButton22->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton22, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _(""), wxPoint(251, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton23"));
	WxButton23->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton23, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton24 = new wxButton(this, ID_WXBUTTON24, _(""), wxPoint(1, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton24"));
	WxButton24->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton24, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton25 = new wxButton(this, ID_WXBUTTON25, _(""), wxPoint(51, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton25"));
	WxButton25->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton25, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton26 = new wxButton(this, ID_WXBUTTON26, _(""), wxPoint(101, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton26"));
	WxButton26->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton26, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton27 = new wxButton(this, ID_WXBUTTON27, _(""), wxPoint(151, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton27"));
	WxButton27->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton27, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton28 = new wxButton(this, ID_WXBUTTON28, _(""), wxPoint(201, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton28"));
	WxButton28->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton28, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton29 = new wxButton(this, ID_WXBUTTON29, _(""), wxPoint(251, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton29"));
	WxButton29->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton29, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton30 = new wxButton(this, ID_WXBUTTON30, _(""), wxPoint(1, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton30"));
	WxButton30->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton30, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton31 = new wxButton(this, ID_WXBUTTON31, _(""), wxPoint(51, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton31"));
	WxButton31->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton31, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton32 = new wxButton(this, ID_WXBUTTON32, _(""), wxPoint(101, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton32"));
	WxButton32->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton32, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton33 = new wxButton(this, ID_WXBUTTON33, _(""), wxPoint(151, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton33"));
	WxButton33->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton33, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton34 = new wxButton(this, ID_WXBUTTON34, _(""), wxPoint(201, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton34"));
	WxButton34->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton34, 0, wxALIGN_CENTER | wxALL, 1);

	WxButton35 = new wxButton(this, ID_WXBUTTON35, _(""), wxPoint(251, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("WxButton35"));
	WxButton35->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(WxButton35, 0, wxALIGN_CENTER | wxALL, 1);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_JUEGO_1044_Mnu_Obj = new wxMenu();
	ID_MNU_JUEGO_1044_Mnu_Obj->Append(ID_MNU_NUEVOJUEGO_1045, _("Nuevo juego"), _(""), wxITEM_NORMAL);
	ID_MNU_JUEGO_1044_Mnu_Obj->Append(ID_MNU_SALIR_1046, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_JUEGO_1044_Mnu_Obj, _("Juego"));
	SetMenuBar(WxMenuBar1);

	SetTitle(_("Othello"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
}

void OthelloFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * casillaClick
 */
void OthelloFrm::casillaClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnunuevojuego1045Click
 */
void OthelloFrm::Mnunuevojuego1045Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnusalir1046Click
 */
void OthelloFrm::Mnusalir1046Click(wxCommandEvent& event)
{
	// insert your code here
}
