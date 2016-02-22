#include "cucumbersomeframe.h"

#include <wx/msgdlg.h> // FIXME: this is debugging

CucumbersomeFrame::CucumbersomeFrame() : MainFrame(nullptr)
{
}

void CucumbersomeFrame::HandlePomodoro(wxCommandEvent& event) {
	wxMessageBox(wxT("Pomodoro"));
}

void CucumbersomeFrame::HandleShortBreak(wxCommandEvent& event) {
	wxMessageBox(wxT("Short"));
}

void CucumbersomeFrame::HandleLongBreak(wxCommandEvent& event) {
	wxMessageBox(wxT("Long"));
}

void CucumbersomeFrame::HandlePause(wxCommandEvent& event) {
	wxMessageBox(wxT("Pause"));
}
