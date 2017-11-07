#include <wx/stattext.h>
#include <wx/toolbar.h>
#include "menu.h"


LeftPanel::LeftPanel(wxPanel * parent)
	: wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
	m_parent = parent;
}

RightPanel::RightPanel(wxPanel * parent)
	: wxPanel(parent, wxID_ANY, wxDefaultPosition,
		wxSize(15, 30), wxBORDER_SUNKEN)
{
}