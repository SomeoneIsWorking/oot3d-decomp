// OoT3D decomp @ 004bee00  name=FUN_004bee00  size=112

void FUN_004bee00(undefined4 param_1,int param_2)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(param_2 + 0x2a6);
  *(undefined *)(param_2 + 0x2a6) = 0;
  FUN_0036055c(param_1,param_2,DAT_004bee70,0);
  *(undefined *)(param_2 + 0x2a6) = uVar1;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000040;
  if (*(short *)(DAT_004bee74 + param_2) != 0) {
    FUN_00367c7c(param_1,*(short *)(DAT_004bee74 + param_2),*(undefined4 *)(param_2 + 0x172c));
    *(undefined4 *)(param_2 + 0x16f8) = *(undefined4 *)(param_2 + 0x172c);
  }
  return;
}

