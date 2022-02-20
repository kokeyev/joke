#include <windows.h>
#include <iostream>
using namespace std;


int main() {
	int h = 0;
	int v = 0;
	RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    h = desktop.right;
	v = desktop.bottom;
    cout << h << " " << v << "\n";
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < v; j++) {
			SetCursorPos(i, j);
		}
	}
}
