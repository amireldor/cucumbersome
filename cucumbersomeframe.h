#ifndef CUCUMBERSOMEFRAME_H
#define CUCUMBERSOMEFRAME_H

#include "cucumbersome.h"

class CucumbersomeFrame : public MainFrame {
public:
	CucumbersomeFrame();
	virtual void HandlePomodoro(wxCommandEvent& event);
	virtual void HandleShortBreak(wxCommandEvent& event);
	virtual void HandleLongBreak(wxCommandEvent& event);
	virtual void HandlePause(wxCommandEvent& event);
};

#endif // CUCUMBERSOMEFRAME_H
