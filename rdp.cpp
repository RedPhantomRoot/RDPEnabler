#include <iostream>
#include <cstdio>
int main ()
{
    int status = system("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
    // printf("%d", status);
    if (status == 0) {
        system("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=Yes");
    }
    return 0;
}