// ? 1995-96 Alain GODON & Fr?d?ric BOUSSEAU

#ifndef __PM_API__
#define __PM_API__

HINSTANCE LoadDLL (char*);
void FAR * CallDLL (HINSTANCE, CpEditDoc*, int);
void FreeDLL (HINSTANCE);

#endif
