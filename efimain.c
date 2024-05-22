#include "efi.h"
#include "ErrorCodes.h"
#include "efilibs.h"

// This is like int main() in a typical C program.
// In this case, we create an ImageHandle for the overall EFI interface,
// as well as a System Table pointer to the EFI_SYSTEM_TABLE struct.
// UEFI 2.9 Specs PDF Page 91
EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *ST)
{

    //We setup this global variable in the libs.h file
    SystemTable = ST;

    ResetScreen();

    SetColor(EFI_WHITE);

    Print(u"Welcome to SpectraOS\r\n\r\n");

    SetColor(EFI_YELLOW);

    Print(u"Developed by Machado && Moro\r\n\r\n");

    SetColor(EFI_GREEN);

    Print(u"\r\nPress any key...\r\n");

    HitAnyKey();

    //EFI_SUCESSFFUL == EVERYTHINGS OK
    return 0;

}
