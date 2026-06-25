// OoT3D decomp @ 0036b02c  name=FUN_0036b02c  size=196

void FUN_0036b02c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x1224);
  if ((iVar3 != 0) && (iVar2 = FUN_00355a60(param_2), iVar2 == 0)) {
    *(undefined4 *)(param_2 + 0x128) = 0;
    *(undefined4 *)(param_2 + 0x1224) = 0;
    *(undefined4 *)(param_2 + 0x12b0) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xfffff7ff;
  }
  iVar3 = FUN_003279dc(param_2);
  if (-1 < iVar3) {
    *(undefined *)(param_2 + 0x1ac) = 0;
    *(undefined *)(param_2 + 0x1a9) = 0;
    uVar1 = DAT_0036b0f0;
    *(undefined *)(param_2 + 0x1b0) = *(undefined *)(param_2 + 0x1b1);
    *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xfefffff7;
    *(undefined4 *)(param_2 + 0x2244) = uVar1;
    *(undefined4 *)(param_2 + 0x2240) = uVar1;
    *(undefined2 *)(DAT_0036b0f4 + param_2) = 0;
    (**DAT_0036b0f8)(param_1,param_2);
    FUN_0033b504(param_2,*(undefined *)(param_2 + 0x1b0));
    *(undefined *)(param_2 + 0x1aa) = 0xfe;
  }
  return;
}

