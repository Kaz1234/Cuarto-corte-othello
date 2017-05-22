///-----------------------------------------------------------------
///
/// @file      OthelloFrm.h
/// @author    usuari
/// Created:   22/05/2017 15:02:25
/// @section   DESCRIPTION
///            OthelloFrm class declaration
///
///------------------------------------------------------------------

#ifndef __OTHELLOFRM_H__
#define __OTHELLOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/button.h>
#include <wx/sizer.h>
////Header Include End

////Dialog Style Start
#undef OthelloFrm_STYLE
#define OthelloFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class OthelloFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		OthelloFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Othello"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = OthelloFrm_STYLE);
		virtual ~OthelloFrm();
		void casillaClick(wxCommandEvent& event);
		void Mnunuevojuego1045Click(wxCommandEvent& event);
		void Mnusalir1046Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMenuBar *WxMenuBar1;
		wxButton *casilla36;
		wxButton *casilla35;
		wxButton *casilla34;
		wxButton *casilla33;
		wxButton *casilla32;
		wxButton *casilla31;
		wxButton *casilla30;
		wxButton *casilla29;
		wxButton *casilla28;
		wxButton *casilla27;
		wxButton *casilla26;
		wxButton *casilla25;
		wxButton *casilla24;
		wxButton *casilla23;
		wxButton *casilla22;
		wxButton *casilla21;
		wxButton *casilla20;
		wxButton *casilla19;
		wxButton *casilla18;
		wxButton *casilla17;
		wxButton *casilla16;
		wxButton *casilla15;
		wxButton *casilla14;
		wxButton *casilla13;
		wxButton *casilla12;
		wxButton *casilla11;
		wxButton *casilla10;
		wxButton *casilla9;
		wxButton *casilla8;
		wxButton *casilla7;
		wxButton *casilla6;
		wxButton *casilla5;
		wxButton *casilla4;
		wxButton *casilla3;
		wxButton *casilla2;
		wxButton *casilla1;
		wxGridSizer *WxGridSizer1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		int turno;
        enum
		{
			////GUI Enum Control ID Start
			ID_MNU_JUEGO_1044 = 1044,
			ID_MNU_NUEVOJUEGO_1045 = 1045,
			ID_MNU_SALIR_1046 = 1046,
			
			ID_CASILLA36 = 1043,
			ID_CASILLA35 = 1042,
			ID_CASILLA34 = 1041,
			ID_CASILLA33 = 1040,
			ID_CASILLA32 = 1039,
			ID_CASILLA31 = 1038,
			ID_CASILLA30 = 1037,
			ID_CASILLA29 = 1036,
			ID_CASILLA28 = 1035,
			ID_CASILLA27 = 1034,
			ID_CASILLA26 = 1033,
			ID_CASILLA25 = 1032,
			ID_CASILLA24 = 1031,
			ID_CASILLA23 = 1030,
			ID_CASILLA22 = 1029,
			ID_CASILLA21 = 1028,
			ID_CASILLA20 = 1027,
			ID_CASILLA19 = 1026,
			ID_CASILLA18 = 1025,
			ID_CASILLA17 = 1024,
			ID_CASILLA16 = 1023,
			ID_CASILLA15 = 1022,
			ID_CASILLA14 = 1021,
			ID_CASILLA13 = 1020,
			ID_CASILLA12 = 1019,
			ID_CASILLA11 = 1018,
			ID_CASILLA10 = 1017,
			ID_CASILLA9 = 1016,
			ID_CASILLA8 = 1015,
			ID_CASILLA7 = 1014,
			ID_CASILLA6 = 1013,
			ID_CASILLA = 1012,
			ID_CASILLA4 = 1011,
			ID_CASILLA3 = 1010,
			ID_CASILLA2 = 1009,
			ID_CASILLA1 = 1002,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
