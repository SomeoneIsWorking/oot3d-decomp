// OoT3D decomp @ 0036aef0  name=FUN_0036aef0  size=292

void FUN_0036aef0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0036b01c;
  if (*(int *)(DAT_0036b014 + param_2) == DAT_0036b018) {
    if (*(char *)(param_2 + 0x1a9) != '\0') {
      iVar2 = FUN_002c40f8(param_2);
      if (iVar2 < 0) {
        FUN_0036f59c(param_2,iVar1);
        *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
      }
      else {
        FUN_0036f59c(param_2,iVar1 + 0xbe);
        *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
      }
    }
    FUN_0034d688(param_1,param_2,*(undefined *)(param_2 + 0x1aa));
    iVar2 = FUN_002c40f8(param_2,(int)*(char *)(param_2 + 0x1a9));
    if (iVar2 < 0) {
      if (*(char *)(param_2 + 0x1a9) != '\0') {
        FUN_0036f59c(param_2,iVar1);
        *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
      }
    }
    else {
      FUN_0036f59c(param_2,DAT_0036b020);
      *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
    }
  }
  FUN_0035d27c(param_2,*(undefined4 *)(DAT_0036b024 + *(char *)(param_2 + 0x1a9) * 4));
  *(undefined2 *)(DAT_0036b028 + param_2) = 0;
  *(undefined *)(param_2 + 0x1748) = 0;
  FUN_0036b02c(param_1,param_2);
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xfffffeff;
  return;
}

