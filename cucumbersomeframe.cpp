#include "cucumbersomeframe.h"

#include <wx/msgdlg.h> // FIXME: this is debugging

CucumbersomeFrame::CucumbersomeFrame() : MainFrame(nullptr)
{
	this->beatTimer = new wxTimer(this, BEAT_TIMER);
	this->Bind(wxEVT_TIMER, &CucumbersomeFrame::OnBeat, this);
}

void CucumbersomeFrame::HandlePomodoro(wxCommandEvent& event) {
	this->StartCountdown(25 * 60);	// 25 minutes
}

void CucumbersomeFrame::HandleShortBreak(wxCommandEvent& event) {
	this->StartCountdown(3 * 60);	// 3 minutes
}

void CucumbersomeFrame::HandleLongBreak(wxCommandEvent& event) {
	this->StartCountdown(15 * 60);	// 15 minutes
}

void CucumbersomeFrame::HandlePause(wxCommandEvent& event) {
	wxMessageBox(wxT("Pause"));
}

void CucumbersomeFrame::StartCountdown(unsigned int seconds) {
	this->secondsLeft = seconds;
	this->beatTimer->Start(1000);
}

void CucumbersomeFrame::OnBeat(wxTimerEvent& event)
{
	this->secondsLeft--;
	wxString text;
	text << "Time: " << this->secondsLeft;
	this->SetTitle(text);
}
