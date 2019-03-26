#include "RenderWindow.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	RenderWindow rw;
	rw.Initialize(hInstance, "DirectXEngine", "MyWindowClass", 800, 600);
	while (rw.ProcessMessages() == true)
	{
		
	}

	return 0;
}