///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "cucumbersome.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	clockPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	clockPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* panelSizer;
	panelSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* labelSizer;
	labelSizer = new wxBoxSizer( wxVERTICAL );
	
	
	labelSizer->Add( 0, 0, 1, wxEXPAND, 5 );
	
	timeLabel = new wxStaticText( clockPanel, TIME_LABEL, wxT("25:00"), wxDefaultPosition, wxDefaultSize, 0 );
	timeLabel->Wrap( -1 );
	timeLabel->SetFont( wxFont( 26, 74, 90, 92, false, wxT("Verdana") ) );
	
	labelSizer->Add( timeLabel, 0, wxALIGN_CENTER|wxALL, 5 );
	
	
	labelSizer->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	panelSizer->Add( labelSizer, 4, wxEXPAND, 5 );
	
	wxBoxSizer* buttonsSizer;
	buttonsSizer = new wxBoxSizer( wxHORIZONTAL );
	
	pomodoroButton = new wxButton( clockPanel, wxID_ANY, wxT("Pomodoro"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonsSizer->Add( pomodoroButton, 1, wxALL|wxEXPAND, 5 );
	
	shortButton = new wxButton( clockPanel, wxID_ANY, wxT("Short break"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonsSizer->Add( shortButton, 1, wxALL|wxEXPAND, 5 );
	
	longButton = new wxButton( clockPanel, wxID_ANY, wxT("Long break"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonsSizer->Add( longButton, 1, wxALL|wxEXPAND, 5 );
	
	
	panelSizer->Add( buttonsSizer, 1, wxEXPAND, 5 );
	
	pauseButton = new wxButton( clockPanel, wxID_ANY, wxT("Start/Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	pauseButton->SetDefault(); 
	panelSizer->Add( pauseButton, 1, wxALIGN_CENTER|wxALL|wxBOTTOM|wxEXPAND, 5 );
	
	
	clockPanel->SetSizer( panelSizer );
	clockPanel->Layout();
	panelSizer->Fit( clockPanel );
	mainSizer->Add( clockPanel, 1, wxEXPAND | wxALL, 15 );
	
	
	this->SetSizer( mainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}
