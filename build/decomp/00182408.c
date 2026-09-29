// OoT3D decomp @ 00182408  name=FUN_00182408  size=164

void FUN_00182408(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if ((*(ushort *)(param_1 + 0x1c) & 0x1f) - 0x14 < 0xc) {
    FUN_00353484(param_1,param_2,param_3,param_4,param_4);
  }
  uVar2 = DAT_001824b0;
  iVar1 = *(int *)(param_1 + 0x240);
  if (iVar1 < 0) {
    if (iVar1 < -0x11) {
      iVar1 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x390));
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x240) = iVar1 + 1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x24c) = DAT_001824ac;
  uVar3 = 0;
  uVar2 = FUN_00371808(param_2,DAT_001824b4,uVar2,param_1);
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4),uVar3);
  return;
}
