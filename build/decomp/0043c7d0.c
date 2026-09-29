// OoT3D decomp @ 0043c7d0  name=FUN_0043c7d0  size=220

void FUN_0043c7d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  uint uVar4;
  int iVar5;
  float fVar6;

  iVar1 = DAT_0043c8ac;
  param_1 = param_1 - *(int *)(DAT_0043c8ac + 8);
  uVar2 = *DAT_0043c8b4;
  if (*(int *)(DAT_0043c8ac + 0x18) == 1) {
    fVar6 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = (int)(*(float *)(DAT_0043c8ac + 0x10) + fVar6 * DAT_0043c8b0);
    *(int *)(DAT_0043c8ac + 0x1c) = iVar5;
    if (iVar5 < 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    else if (0xff < iVar5) {
      *(undefined4 *)(iVar1 + 0x1c) = 0xff;
    }
    uVar3 = *(uint *)(iVar1 + 0x1c);
    uVar4 = *(uint *)(iVar1 + 0x20);
    if ((int)uVar3 < (int)uVar4) goto LAB_0043c894;
  }
  else {
    if (*(int *)(DAT_0043c8ac + 0x18) != 2) {
      return;
    }
    fVar6 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = (uint)(*(float *)(DAT_0043c8ac + 0x10) + fVar6 * DAT_0043c8b0);
    *(uint *)(DAT_0043c8ac + 0x20) = uVar4;
    if (*(int *)(iVar1 + 0x1c) < 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    else if (0xff < *(int *)(iVar1 + 0x1c)) {
      *(undefined4 *)(iVar1 + 0x1c) = 0xff;
    }
    uVar3 = *(uint *)(iVar1 + 0x1c);
    if ((int)uVar3 < (int)uVar4) goto LAB_0043c894;
  }
  uVar3 = uVar4 - 1;
  *(uint *)(iVar1 + 0x1c) = uVar3;
LAB_0043c894:
  FUN_00301694(uVar2,uVar3 & 0xff,uVar4 & 0xff);
  return;
}
