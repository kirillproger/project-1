#include "MyGLCanvas.h"
using namespace std;

CMyGLCanvas::CMyGLCanvas(wxWindow *parent, wxWindowID id,
	const wxPoint& pos, const wxSize& size,
	long style, const wxString& name)
	: CMyGLCanvasBase(parent, id, pos, size, style, name)
{
	cameraPointingX = 0;
	cameraPointingY = 0;
	cameraPointingZ = 0;
	cameraZoomDistance = 20;
	cameraElevationDeg = 45;
	cameraAzimuthDeg = 135;
	cameraIsProjective = true;
}
CMyGLCanvas::~CMyGLCanvas()
{
}

void CMyGLCanvas::OnRenderError(const wxString &str)
{
}
void CMyGLCanvas::OnPreRender()
{
}

void CMyGLCanvas::OnPostRenderSwapBuffers(double At, wxPaintDC &dc)
{
}

void CMyGLCanvas::OnPostRender()
{
	// Show credits on the screen? renderTextBitmap(20, 20, "" );
}