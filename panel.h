#include <wx/wx.h>
#include <wx/panel.h>
#include <wx/wxprec.h>
#include <mrpt/gui/CMyGLCanvasBase.h>
#include "MyGLCanvas.h"
class LeftPanel : public wxPanel
{
public:
	LeftPanel(wxPanel *parent);
	wxPanel *m_parent;
	int count;
};
class RightPanel : public wxPanel
{
public:
	RightPanel(wxPanel *parent);
};