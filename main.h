#ifndef MAIN_H
#define MAIN_H

#include <wx/app.h>

class CucumbersomeApp : public wxApp {
public:
	virtual bool OnInit();

private:
	wxFrame *mainFrame;
};

DECLARE_APP(CucumbersomeApp)

#endif