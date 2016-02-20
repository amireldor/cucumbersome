#include "main.h"

#include <wx/msgdlg.h>
#include "cucumbersome.h"

IMPLEMENT_APP(CucumbersomeApp)

bool CucumbersomeApp::OnInit()
{
	mainFrame = new MainFrame(nullptr);
	mainFrame->Show();
	return true;
}
