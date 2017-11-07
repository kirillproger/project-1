#include "Panel.h"
#include <wx/wxprec.h>
#include <wx/menu.h>
class Communicate : public wxFrame
{
public:
	Communicate(const wxString& title);
	LeftPanel *m_lp;
	RightPanel *m_rp;
	wxPanel *m_parent;
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnOpen(wxCommandEvent& event);
	wxMenuBar *menubar;
	wxMenu *file;
	wxMenu *help;
};
