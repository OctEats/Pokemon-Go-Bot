#pragma once

#include "Interfaces.h"

#include "Vector2D.h"

namespace Render
{
	void Initialise();

	// Normal Drawing functions
	void Clear(int x, int y, int w, int h, Color color);
	void Outline(int x, int y, int w, int h, Color color);
	void Line(int x, int y, int x2, int y2, Color color);
	void PolyLine(int *x, int *y, int count, Color color);
	void GradientHDarker(int x, int y, int w, int h, Color c1, Color c2);
	void Polygon(int count, Vertex_t* Vertexs, Color color);
	void PolygonOutline(int count, Vertex_t* Vertexs, Color color, Color colorLine);
	void PolyLine(int count, Vertex_t* Vertexs, Color colorLine);

	// Gradient Functions
	void GradientV(int x, int y, int w, int h, Color c1, Color c2);
	void GradientH(int x, int y, int w, int h, Color c1, Color c2);

	void LoopedBrick(int x, int y, int w, int h, Color c1, Color c2);

	// Text functions
	namespace Fonts
	{
		extern DWORD Default;
		extern DWORD Menu;
		extern DWORD MenuBold;
		extern DWORD ESP;
		extern DWORD MenuText;
		extern DWORD TabIcon;
	};

	void Text(int x, int y, Color color, DWORD font, const char* text);
	void Textf(int x, int y, Color color, DWORD font, const char* fmt, ...);
	void Text(int x, int y, Color color, DWORD font, const wchar_t* text);
	RECT get_text_size(const char * _Input, int font);
	RECT GetTextSize(DWORD font, const char* text);

	// Other rendering functions
	bool WorldToScreen(Vector &in, Vector &out);
	RECT GetViewport();
};
