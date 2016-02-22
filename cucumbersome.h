///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __CUCUMBERSOME_H__
#define __CUCUMBERSOME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define TIME_LABEL 1000

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxPanel* clockPanel;
		wxStaticText* timeLabel;
		wxButton* pomodoroButton;
		wxButton* shortButton;
		wxButton* longButton;
		wxButton* pauseButton;
		wxStaticText* infoLabel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void HandlePomodoro( wxCommandEvent& event ) { event.Skip(); }
		virtual void HandleShortBreak( wxCommandEvent& event ) { event.Skip(); }
		virtual void HandleLongBreak( wxCommandEvent& event ) { event.Skip(); }
		virtual void HandlePause( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Cucumbersome"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 366,356 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame();
	
};

#endif //__CUCUMBERSOME_H__
