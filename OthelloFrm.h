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
		wxButton *WxButton35;
		wxButton *WxButton34;
		wxButton *WxButton33;
		wxButton *WxButton32;
		wxButton *WxButton31;
		wxButton *WxButton30;
		wxButton *WxButton29;
		wxButton *WxButton28;
		wxButton *WxButton27;
		wxButton *WxButton26;
		wxButton *WxButton25;
		wxButton *WxButton24;
		wxButton *WxButton23;
		wxButton *WxButton22;
		wxButton *WxButton21;
		wxButton *WxButton20;
		wxButton *WxButton19;
		wxButton *WxButton18;
		wxButton *WxButton17;
		wxButton *WxButton16;
		wxButton *WxButton15;
		wxButton *WxButton14;
		wxButton *WxButton13;
		wxButton *WxButton12;
		wxButton *WxButton11;
		wxButton *WxButton10;
		wxButton *WxButton9;
		wxButton *WxButton8;
		wxButton *WxButton7;
		wxButton *WxButton6;
		wxButton *WxButton5;
		wxButton *WxButton4;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxButton *casilla;
		wxGridSizer *WxGridSizer1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_MNU_JUEGO_1044 = 1044,
			ID_MNU_NUEVOJUEGO_1045 = 1045,
			ID_MNU_SALIR_1046 = 1046,
			
			ID_WXBUTTON35 = 1043,
			ID_WXBUTTON34 = 1042,
			ID_WXBUTTON33 = 1041,
			ID_WXBUTTON32 = 1040,
			ID_WXBUTTON31 = 1039,
			ID_WXBUTTON30 = 1038,
			ID_WXBUTTON29 = 1037,
			ID_WXBUTTON28 = 1036,
			ID_WXBUTTON27 = 1035,
			ID_WXBUTTON26 = 1034,
			ID_WXBUTTON25 = 1033,
			ID_WXBUTTON24 = 1032,
			ID_WXBUTTON23 = 1031,
			ID_WXBUTTON22 = 1030,
			ID_WXBUTTON21 = 1029,
			ID_WXBUTTON20 = 1028,
			ID_WXBUTTON19 = 1027,
			ID_WXBUTTON18 = 1026,
			ID_WXBUTTON17 = 1025,
			ID_WXBUTTON16 = 1024,
			ID_WXBUTTON15 = 1023,
			ID_WXBUTTON14 = 1022,
			ID_WXBUTTON13 = 1021,
			ID_WXBUTTON12 = 1020,
			ID_WXBUTTON11 = 1019,
			ID_WXBUTTON10 = 1018,
			ID_WXBUTTON9 = 1017,
			ID_WXBUTTON8 = 1016,
			ID_WXBUTTON7 = 1015,
			ID_WXBUTTON6 = 1014,
			ID_WXBUTTON5 = 1013,
			ID_WXBUTTON4 = 1012,
			ID_WXBUTTON3 = 1011,
			ID_WXBUTTON2 = 1010,
			ID_WXBUTTON1 = 1009,
			ID_CASILLA = 1002,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
