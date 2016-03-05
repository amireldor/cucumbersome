#ifndef CUCUMBERSOMEFRAME_H
#define CUCUMBERSOMEFRAME_H

#include "cucumbersome.h"
#include <wx/timer.h>

#define BEAT_TIMER	1337

class CucumbersomeFrame : public MainFrame {
public:
	CucumbersomeFrame();
	virtual void HandlePomodoro(wxCommandEvent& event);
	virtual void HandleShortBreak(wxCommandEvent& event);
	virtual void HandleLongBreak(wxCommandEvent& event);
	virtual void HandlePause(wxCommandEvent& event);

	void StartCountdown(unsigned int seconds);
	void OnBeat(wxTimerEvent& event);

private:
	unsigned int secondsLeft = 0;
	wxTimer *beatTimer;
};

#endif // CUCUMBERSOMEFRAME_H
