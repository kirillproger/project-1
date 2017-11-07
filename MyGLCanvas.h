#include <mrpt/gui/CMyGLCanvasBase.h>
using namespace mrpt::gui;
class CMyGLCanvas : public CMyGLCanvasBase
{
public:
	CMyGLCanvas(wxWindow *parent, wxWindowID id = wxID_ANY,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = 0, const wxString& name = _T("CMyGLCanvas"));

	virtual ~CMyGLCanvas();

	void OnPreRender();
	void OnPostRender();
	void OnPostRenderSwapBuffers(double At, wxPaintDC &dc);
	void OnRenderError(const wxString &str);

};
