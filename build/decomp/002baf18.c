// OoT3D decomp @ 002baf18  name=FUN_002baf18  size=128

void FUN_002baf18(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = *DAT_002baf98 + (param_2 & 0x1ff) * 4;
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    *(int *)(iVar1 + 0x10) = param_1;
  }
  else {
    if (*(uint *)(iVar2 + 8) <= param_2) {
      iVar1 = *(int *)(iVar2 + 0xc);
      do {
        if (iVar1 == 0) {
LAB_002baf90:
          *(int *)(iVar2 + 0xc) = param_1;
          return;
        }
        if (param_2 < *(uint *)(iVar1 + 8)) {
          *(int *)(iVar2 + 0xc) = param_1;
          *(int *)(param_1 + 0xc) = iVar1;
          if (iVar1 != 0) {
            return;
          }
          goto LAB_002baf90;
        }
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar1 + 0xc);
      } while( true );
    }
    *(int *)(param_1 + 0xc) = iVar2;
    *(int *)(iVar1 + 0x10) = param_1;
  }
  return;
}
