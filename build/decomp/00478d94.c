// OoT3D decomp @ 00478d94  name=FUN_00478d94  size=252

bool FUN_00478d94(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  undefined4 uStack_14;

  local_18 = DAT_00478de8;
  uStack_14 = DAT_00478de4;
  FUN_0037547c(param_2,param_1,0,DAT_00478de8);
  if (param_1 == 0) {
    param_1 = DAT_0048543c;
  }
  iVar1 = 0;
  do {
    iVar2 = DAT_00485440 + iVar1 * 0xa0;
    iVar3 = *(int *)(iVar2 + 0x84);
    if ((iVar3 != 0) && (iVar3 == param_1)) {
      iVar2 = *(int *)(iVar2 + 0x9c);
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x9c);
      }
      if (iVar2 == param_2) {
        iVar1 = DAT_00485440 + iVar1 * 0xa0;
        goto LAB_004853f8;
      }
    }
    iVar1 = iVar1 + 1;
    if (0x1f < iVar1) {
      iVar1 = 0;
LAB_004853f8:
      bVar4 = false;
      if (iVar1 != 0) {
        local_18 = param_3;
        FUN_0030ee14(&local_18,iVar1 + 0x9c);
        bVar4 = local_18 != 0;
        if (bVar4) {
          FUN_0030c198(local_18,6,param_3);
        }
        FUN_0030ede0(&local_18);
      }
      return bVar4;
    }
  } while( true );
}
