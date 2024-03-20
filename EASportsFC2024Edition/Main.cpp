#include <Windows.h>
#include <BlackBone/Process/Process.h>
#include <filesystem>
namespace fs = std::filesystem;
void BypassEAAnticheat() {
	blackbone::Process proc;
	std::wstring string = fs::current_path();
	NTSTATUS status_exec = proc.CreateAndAttach(string + L"\\FC24.exe");
	if (status_exec) {
		MessageBoxA(0, "Not Founded FC24.exe", "EAAnticheat Bypass", MB_ICONERROR);
	}
	else {
		exit(1220);
	}
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
	BypassEAAnticheat();
	return 0;
}