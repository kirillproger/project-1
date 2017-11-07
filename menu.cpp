#include "menu.h"
#include"resource.h"
#include <wx/toolbar.h>
#include <wx/glcanvas.h>
enum {
	wxID_START=1,
	wxID_ROBOT=2,
	wxID_TARGET=3
};
Communicate::Communicate(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(1100,700))
{
	

	CreateStatusBar();
	SetStatusText("");
	m_parent = new wxPanel(this, wxID_ANY);
	wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
	m_lp = new LeftPanel(m_parent);
	m_rp = new RightPanel(m_parent);
	hbox->Add(m_lp, 9, wxEXPAND | wxALL, 3);
	hbox->Add(m_rp, 1, wxEXPAND | wxALL, 3);
	m_parent->SetSizer(hbox);
	this->Centre();

	wxButton* load = new wxButton(m_rp, wxID_OPEN, wxT("Load Map..."),wxPoint(3,3));
	wxButton* start = new wxButton(m_rp, wxID_START, wxT("Start"),wxPoint(3,33));
	wxButton* stop = new wxButton(m_rp, wxID_STOP, wxT("Stop"), wxPoint(3, 63));
	wxButton* robot = new wxButton(m_rp, wxID_ROBOT, wxT("Place robot"), wxPoint(3,93));
	wxButton* target = new wxButton(m_rp, wxID_TARGET, wxT("Set target"), wxPoint(3, 123));
	wxButton* exit = new wxButton(m_rp, wxID_EXIT, wxT("Exit"), wxPoint(3, 153));
	menubar = new wxMenuBar;
	file = new wxMenu;
	help = new wxMenu;
	file->Append(wxID_OPEN, wxT("&Load map..."));
	file->Append(wxID_EXIT, wxT("&Quit"));
	help->Append(wxID_ABOUT, wxT("&About"));
	menubar->Append(file, wxT("&File"));
	menubar->Append(help, wxT("&Help"));
	SetMenuBar(menubar);
	Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Communicate::OnQuit));
	Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
		wxCommandEventHandler(Communicate::OnQuit));
	Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED,
		wxCommandEventHandler(Communicate::OnAbout));
	Connect(wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED,
		wxCommandEventHandler(Communicate::OnOpen));
	Centre();
}
//Событие при нажатии пункта load map
void Communicate::OnOpen(wxCommandEvent& WXUNUSED(event))
{

}
//Событие при нажатии пункта Quit и наджатии кнопки Exit
void Communicate::OnQuit(wxCommandEvent& WXUNUSED(event))
{
	Close(true);
}
//Событие при нажатии пункта About
void Communicate::OnAbout(wxCommandEvent& WXUNUSED(event))
{
	wxMessageBox("This program was written using MRPT and WxWidgets libraries", "Info");
}
