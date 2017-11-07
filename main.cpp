#include "main.h"
#include "menu.h"
IMPLEMENT_APP(MyApp)
bool MyApp::OnInit()
{
	Communicate *communicate = new Communicate(wxT("MRPT Scaner version 1.0.0"));
	communicate->Show(true);
	return true;
}