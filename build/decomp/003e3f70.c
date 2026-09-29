// OoT3D decomp @ 003e3f70  name=FUN_003e3f70  size=204

void FUN_003e3f70(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_003731e0(param_1 + 0x1a4);
  iVar3 = FUN_003736fc(DAT_003e404c,DAT_003e4048,param_1 + 0x1a4);
  sVar1 = 0;
  if (iVar3 != 0) {
    sVar1 = *(short *)(param_1 + 0x920);
  }
  if (iVar3 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x920) = sVar1 + -1;
  }
  FUN_0036f364(param_1,param_2);
  if (*(int *)(param_1 + 0x98) < DAT_003e4050) {
    FUN_0036e734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x940));
    uVar2 = DAT_003e4058;
    *(undefined4 *)(param_1 + 0x918) = DAT_003e4054;
    *(undefined2 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  else if (*(short *)(param_1 + 0x920) == 0) {
    FUN_0036e734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x940));
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0xf,3);
  }
  if (*(char *)(param_1 + 0x929) != -1) {
    return;
  }
  FUN_00373264(param_1,DAT_003e4060);
  return;
}
