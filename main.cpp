#include "main.h"

#include "cucumbersomeframe.h"

IMPLEMENT_APP(CucumbersomeApp)

bool CucumbersomeApp::OnInit()
{
	mainFrame = new CucumbersomeFrame();
	mainFrame->Show();
	return true;
}
