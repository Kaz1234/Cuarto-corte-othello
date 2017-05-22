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
	EVT_BUTTON(ID_CASILLA36,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA35,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA34,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA33,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA32,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA31,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA30,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA29,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA28,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA27,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA26,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA25,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA24,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA23,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA22,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA21,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA20,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA19,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA18,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA17,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA16,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA15,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA14,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA13,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA12,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA11,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA10,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA9,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA8,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA7,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA6,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA4,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA3,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA2,OthelloFrm::casillaClick)
	EVT_BUTTON(ID_CASILLA1,OthelloFrm::casillaClick)
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

	casilla1 = new wxButton(this, ID_CASILLA1, _(""), wxPoint(1, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla1"));
	casilla1->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla1, 0, wxALIGN_CENTER | wxALL, 1);

	casilla2 = new wxButton(this, ID_CASILLA2, _(""), wxPoint(51, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla2"));
	casilla2->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla2, 0, wxALIGN_CENTER | wxALL, 1);

	casilla3 = new wxButton(this, ID_CASILLA3, _(""), wxPoint(101, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla3"));
	casilla3->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla3, 0, wxALIGN_CENTER | wxALL, 1);

	casilla4 = new wxButton(this, ID_CASILLA4, _(""), wxPoint(151, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla4"));
	casilla4->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla4, 0, wxALIGN_CENTER | wxALL, 1);

	casilla5 = new wxButton(this, ID_CASILLA, _(""), wxPoint(201, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla5"));
	casilla5->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla5, 0, wxALIGN_CENTER | wxALL, 1);

	casilla6 = new wxButton(this, ID_CASILLA6, _(""), wxPoint(251, 1), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla6"));
	casilla6->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla6, 0, wxALIGN_CENTER | wxALL, 1);

	casilla7 = new wxButton(this, ID_CASILLA7, _(""), wxPoint(1, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla7"));
	casilla7->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla7, 0, wxALIGN_CENTER | wxALL, 1);

	casilla8 = new wxButton(this, ID_CASILLA8, _(""), wxPoint(51, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla8"));
	casilla8->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla8, 0, wxALIGN_CENTER | wxALL, 1);

	casilla9 = new wxButton(this, ID_CASILLA9, _(""), wxPoint(101, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla9"));
	casilla9->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla9, 0, wxALIGN_CENTER | wxALL, 1);

	casilla10 = new wxButton(this, ID_CASILLA10, _(""), wxPoint(151, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla10"));
	casilla10->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla10, 0, wxALIGN_CENTER | wxALL, 1);

	casilla11 = new wxButton(this, ID_CASILLA11, _(""), wxPoint(201, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla11"));
	casilla11->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla11, 0, wxALIGN_CENTER | wxALL, 1);

	casilla12 = new wxButton(this, ID_CASILLA12, _(""), wxPoint(251, 51), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla12"));
	casilla12->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla12, 0, wxALIGN_CENTER | wxALL, 1);

	casilla13 = new wxButton(this, ID_CASILLA13, _(""), wxPoint(1, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla13"));
	casilla13->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla13, 0, wxALIGN_CENTER | wxALL, 1);

	casilla14 = new wxButton(this, ID_CASILLA14, _(""), wxPoint(51, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla14"));
	casilla14->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla14, 0, wxALIGN_CENTER | wxALL, 1);

	casilla15 = new wxButton(this, ID_CASILLA15, _(""), wxPoint(101, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla15"));
	casilla15->SetBackgroundColour(wxColour(255,255,0));
	WxGridSizer1->Add(casilla15, 0, wxALIGN_CENTER | wxALL, 1);

	casilla16 = new wxButton(this, ID_CASILLA16, _(""), wxPoint(151, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla16"));
	casilla16->SetBackgroundColour(wxColour(255,128,64));
	WxGridSizer1->Add(casilla16, 0, wxALIGN_CENTER | wxALL, 1);

	casilla17 = new wxButton(this, ID_CASILLA17, _(""), wxPoint(201, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla17"));
	casilla17->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla17, 0, wxALIGN_CENTER | wxALL, 1);

	casilla18 = new wxButton(this, ID_CASILLA18, _(""), wxPoint(251, 101), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla18"));
	casilla18->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla18, 0, wxALIGN_CENTER | wxALL, 1);

	casilla19 = new wxButton(this, ID_CASILLA19, _(""), wxPoint(1, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla19"));
	casilla19->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla19, 0, wxALIGN_CENTER | wxALL, 1);

	casilla20 = new wxButton(this, ID_CASILLA20, _(""), wxPoint(51, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla20"));
	casilla20->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla20, 0, wxALIGN_CENTER | wxALL, 1);

	casilla21 = new wxButton(this, ID_CASILLA21, _(""), wxPoint(101, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla21"));
	casilla21->SetBackgroundColour(wxColour(255,128,64));
	WxGridSizer1->Add(casilla21, 0, wxALIGN_CENTER | wxALL, 1);

	casilla22 = new wxButton(this, ID_CASILLA22, _(""), wxPoint(151, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla22"));
	casilla22->SetBackgroundColour(wxColour(255,255,0));
	WxGridSizer1->Add(casilla22, 0, wxALIGN_CENTER | wxALL, 1);

	casilla23 = new wxButton(this, ID_CASILLA23, _(""), wxPoint(201, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla23"));
	casilla23->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla23, 0, wxALIGN_CENTER | wxALL, 1);

	casilla24 = new wxButton(this, ID_CASILLA24, _(""), wxPoint(251, 151), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla24"));
	casilla24->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla24, 0, wxALIGN_CENTER | wxALL, 1);

	casilla25 = new wxButton(this, ID_CASILLA25, _(""), wxPoint(1, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla25"));
	casilla25->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla25, 0, wxALIGN_CENTER | wxALL, 1);

	casilla26 = new wxButton(this, ID_CASILLA26, _(""), wxPoint(51, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla26"));
	casilla26->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla26, 0, wxALIGN_CENTER | wxALL, 1);

	casilla27 = new wxButton(this, ID_CASILLA27, _(""), wxPoint(101, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla27"));
	casilla27->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla27, 0, wxALIGN_CENTER | wxALL, 1);

	casilla28 = new wxButton(this, ID_CASILLA28, _(""), wxPoint(151, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla28"));
	casilla28->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla28, 0, wxALIGN_CENTER | wxALL, 1);

	casilla29 = new wxButton(this, ID_CASILLA29, _(""), wxPoint(201, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla29"));
	casilla29->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla29, 0, wxALIGN_CENTER | wxALL, 1);

	casilla30 = new wxButton(this, ID_CASILLA30, _(""), wxPoint(251, 201), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla30"));
	casilla30->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla30, 0, wxALIGN_CENTER | wxALL, 1);

	casilla31 = new wxButton(this, ID_CASILLA31, _(""), wxPoint(1, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla31"));
	casilla31->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla31, 0, wxALIGN_CENTER | wxALL, 1);

	casilla32 = new wxButton(this, ID_CASILLA32, _(""), wxPoint(51, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla32"));
	casilla32->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla32, 0, wxALIGN_CENTER | wxALL, 1);

	casilla33 = new wxButton(this, ID_CASILLA33, _(""), wxPoint(101, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla33"));
	casilla33->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla33, 0, wxALIGN_CENTER | wxALL, 1);

	casilla34 = new wxButton(this, ID_CASILLA34, _(""), wxPoint(151, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla34"));
	casilla34->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla34, 0, wxALIGN_CENTER | wxALL, 1);

	casilla35 = new wxButton(this, ID_CASILLA35, _(""), wxPoint(201, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla35"));
	casilla35->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla35, 0, wxALIGN_CENTER | wxALL, 1);

	casilla36 = new wxButton(this, ID_CASILLA36, _(""), wxPoint(251, 251), wxSize(48, 48), wxNO_BORDER, wxDefaultValidator, _("casilla36"));
	casilla36->SetBackgroundColour(wxColour(255,255,255));
	WxGridSizer1->Add(casilla36, 0, wxALIGN_CENTER | wxALL, 1);

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
	wxButton *casilla = (wxButton*) event.GetEventObject();
	
	if(turno == 0){
        casilla->SetBackgroundColour(wxColour(255,255,0));
        this->turno=1;
    }else if(turno == 1){
        casilla->SetBackgroundColour(wxColour(255,128,64));
        this->turno=0;
    };
    
}


void OthelloFrm::Mnunuevojuego1045Click(wxCommandEvent& event)
{
	casilla1->SetBackgroundColour(wxColour(255,255,255));
	casilla2->SetBackgroundColour(wxColour(255,255,255));
	casilla3->SetBackgroundColour(wxColour(255,255,255));
	casilla4->SetBackgroundColour(wxColour(255,255,255));
	casilla5->SetBackgroundColour(wxColour(255,255,255));
	casilla6->SetBackgroundColour(wxColour(255,255,255));
	casilla7->SetBackgroundColour(wxColour(255,255,255));
	casilla8->SetBackgroundColour(wxColour(255,255,255));
	casilla9->SetBackgroundColour(wxColour(255,255,255));
	casilla10->SetBackgroundColour(wxColour(255,255,255));
	casilla11->SetBackgroundColour(wxColour(255,255,255));
	casilla12->SetBackgroundColour(wxColour(255,255,255));
	casilla13->SetBackgroundColour(wxColour(255,255,255));
	casilla14->SetBackgroundColour(wxColour(255,255,255));
	casilla15->SetBackgroundColour(wxColour(255,255,0));
	casilla16->SetBackgroundColour(wxColour(255,128,64));
	casilla17->SetBackgroundColour(wxColour(255,255,255));
	casilla18->SetBackgroundColour(wxColour(255,255,255));
	casilla19->SetBackgroundColour(wxColour(255,255,255));
	casilla20->SetBackgroundColour(wxColour(255,255,255));
	casilla21->SetBackgroundColour(wxColour(255,128,64));
	casilla22->SetBackgroundColour(wxColour(255,255,0));
	casilla23->SetBackgroundColour(wxColour(255,255,255));
	casilla24->SetBackgroundColour(wxColour(255,255,255));
	casilla25->SetBackgroundColour(wxColour(255,255,255));
	casilla26->SetBackgroundColour(wxColour(255,255,255));
	casilla27->SetBackgroundColour(wxColour(255,255,255));
	casilla28->SetBackgroundColour(wxColour(255,255,255));
	casilla29->SetBackgroundColour(wxColour(255,255,255));
	casilla30->SetBackgroundColour(wxColour(255,255,255));
	casilla31->SetBackgroundColour(wxColour(255,255,255));
	casilla32->SetBackgroundColour(wxColour(255,255,255));
	casilla33->SetBackgroundColour(wxColour(255,255,255));
	casilla34->SetBackgroundColour(wxColour(255,255,255));
	casilla35->SetBackgroundColour(wxColour(255,255,255));
	casilla36->SetBackgroundColour(wxColour(255,255,255));
}

/*
 * Mnusalir1046Click
 */
void OthelloFrm::Mnusalir1046Click(wxCommandEvent& event)
{
	Close();
}
