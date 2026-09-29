// OoT3D decomp @ 003c70bc  name=FUN_003c70bc  size=292

void FUN_003c70bc(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_003c7224;
  FUN_003705a0(DAT_003c7224,DAT_003c7220,param_1 + 0x6c);
  iVar4 = FUN_003736fc(DAT_003c7228,uVar2,param_1 + 0x1a4);
  sVar1 = 0;
  if (iVar4 != 0) {
    sVar1 = *(short *)(param_1 + 0x920);
  }
  if (iVar4 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x920) = sVar1 + -1;
  }
  iVar4 = FUN_00363e64(param_1,param_1 + 8);
  if (DAT_003c722c < iVar4) {
    uVar3 = FUN_00367358(param_1,param_1 + 8);
    *(undefined2 *)(param_1 + 0x924) = uVar3;
  }
  FUN_00370378(param_1 + 0x36,(int)*(short *)(param_1 + 0x924),DAT_003c7230);
  FUN_0036f364(param_1,param_2);
  if (*(int *)(param_1 + 0x98) < DAT_003c7234) {
    if (*(short *)(param_1 + 0x920) < 0x1d) {
      FUN_0036e734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x940));
      uVar2 = DAT_003c723c;
      *(undefined4 *)(param_1 + 0x918) = DAT_003c7238;
      *(undefined2 *)(param_1 + 0x920) = 0;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
  }
  else if (*(short *)(param_1 + 0x920) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(char *)(param_1 + 0x929) != -1) {
    return;
  }
  FUN_00373264(param_1,DAT_003c7248);
  return;
}
