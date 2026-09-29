// OoT3D decomp @ 003e294c  name=FUN_003e294c  size=128

void FUN_003e294c(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0xa4e) != 0) {
    sVar1 = *(short *)(param_1 + 0xa4e) + -1;
    uVar3 = extraout_r1;
    if (sVar1 == 0x1e) {
      uVar3 = DAT_003e29cc;
    }
    *(short *)(param_1 + 0xa4e) = sVar1;
    if (sVar1 == 0x1e) {
      FUN_00375bcc(param_1,uVar3);
    }
    if (*(short *)(param_1 + 0xa4e) != 0) {
      return;
    }
  }
  iVar2 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x34),0x800);
  if (iVar2 == 0) {
    return;
  }
  *(char *)(param_1 + 0xa4c) = -*(char *)(param_1 + 0xa4c);
  FUN_00362998(param_1);
  return;
}
