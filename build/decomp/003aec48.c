// OoT3D decomp @ 003aec48  name=FUN_003aec48  size=548

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003aec48(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  FUN_00317884();
  uVar1 = DAT_003aeef8;
  FUN_0036e168(DAT_003aef04,DAT_003aef00,DAT_003aeefc,DAT_003aeef8,param_1 + 0x6c);
  piVar2 = DAT_003aef14;
  uVar6 = DAT_003aef0c;
  fVar8 = *(float *)(param_1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x30);
  fVar10 = fVar8 - *(float *)(param_1 + 8);
  fVar9 = fVar7 - *(float *)(param_1 + 0x10);
  if ((DAT_003aef08 < (int)(fVar10 * fVar10 + fVar9 * fVar9)) ||
     (fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003aef14 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3),
     (int)*(short *)(param_1 + 0x5dc) < (int)(DAT_003aef18 / fVar9 + DAT_003aef10))) {
    uVar4 = FUN_003758b0(*(float *)(param_1 + 0x10) - fVar7,*(float *)(param_1 + 8) - fVar8);
    FUN_003529d4(param_1 + 0x36,uVar4,uVar6);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x128);
    if (iVar5 != 0 && iVar5 != param_1) {
      uVar4 = FUN_003758b0(*(float *)(iVar5 + 0x30) - fVar7,*(float *)(iVar5 + 0x28) - fVar8);
      FUN_003529d4(param_1 + 0x36,uVar4,uVar6);
    }
  }
  fVar8 = DAT_003aef20;
  fVar7 = DAT_003aef1c;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  fVar8 = fVar8 + *(float *)(param_1 + 0x6c) * fVar7;
  if (DAT_003aef24 < (int)fVar8) {
    fVar8 = DAT_003aef28;
  }
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x254) = fVar8 * fVar7 * DAT_003aef2c;
  FUN_003731e0(param_1 + 0x214);
  uVar3 = DAT_003aef34;
  uVar4 = DAT_003aef30;
  uVar6 = DAT_00339d70;
  if (*(short *)(param_1 + 0x5dc) < 1) {
    *(undefined4 *)(param_1 + 0x70) = DAT_00339d70;
    *(undefined4 *)(param_1 + 0x74) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(5,0x23);
  }
  if (*(int *)(param_1 + 0x128) == param_1) {
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    uVar6 = FUN_0036ae18(param_1 + 0x214,5);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar3,uVar1,uVar6,uVar4,param_1 + 0x214,5,1);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(10,0x28);
  }
  if (DAT_003aef40 <= *(int *)(param_1 + 0x98)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(10,0x28);
}
