#include "MyForm.h"

#include <Windows.h>
//std::vector<vector<double>> v_Global;
using namespace My3Lab;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}