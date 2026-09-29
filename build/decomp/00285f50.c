// OoT3D decomp @ 00285f50  name=FUN_00285f50  size=76

void FUN_00285f50(uint param_1)

{
  char cVar1;
  int iVar2;

  iVar2 = iRam00285f9c;
  if (param_1 == 7) {
    *(undefined1 *)(iRam00285f9c + 6) = 1;
  }
  else {
    cVar1 = *(char *)(iRam00285fa0 + (param_1 & 7));
    if (*(char *)(iRam00285f9c + 0x35) != cVar1) {
      FUN_00355fac(0,0,cVar1,2);
      *(char *)(iVar2 + 0x35) = cVar1;
    }
  }
  return;
}
