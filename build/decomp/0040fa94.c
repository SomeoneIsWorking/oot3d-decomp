// OoT3D decomp @ 0040fa94  name=FUN_0040fa94  size=120

void FUN_0040fa94(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined1 local_24;

  iVar1 = 0;
  do {
    local_28 = (int)*(short *)(*param_2 + iVar1 * 2 + 0x10);
    if (local_28 != 0) {
      local_28 = local_28 + *param_2;
      local_24 = 0;
      uVar2 = FUN_003087a4(param_1,&local_28);
      *(undefined4 *)(param_3 + iVar1 * 4) = uVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}
