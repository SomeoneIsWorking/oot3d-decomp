// OoT3D decomp @ 003ebed4  name=FUN_003ebed4  size=460

void FUN_003ebed4(int param_1,undefined4 param_2)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  uint uVar6;
  float fVar7;

  iVar4 = FUN_0036bc98();
  uVar3 = DAT_003ebf30;
  if (iVar4 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    FUN_0036bb28(uVar3,param_1,param_2);
    *(short *)(DAT_003ebf38 + param_1) = (short)DAT_003ebf34;
  }
  else {
    *(undefined4 *)(param_1 + 0x7b8) = DAT_003ebf2c;
  }
  fVar1 = DAT_00314e70;
  if (*(short *)(param_1 + 0x7b0) == 0) {
    fVar5 = (float)FUN_00371e50(DAT_00314e74,0,param_2);
    uVar6 = VectorFloatToUnsigned(fVar5 + DAT_00314e78,3);
    fVar5 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00314e80 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7b0) = (short)(int)((fVar5 * DAT_00314e7c) / fVar7 + DAT_00314e84);
    uVar3 = FUN_0036ae14(param_1 + 0x314,0);
    VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(param_1 + 0x314,0,2);
  }
  else {
    *(short *)(param_1 + 0x7b0) = *(short *)(param_1 + 0x7b0) + -1;
  }
  if (((*(int *)(param_1 + 0x98) < DAT_00314e88) && ((*(ushort *)(param_1 + 0x7ae) & 2) == 0)) &&
     (*(ushort *)(param_1 + 0x7ae) = *(ushort *)(param_1 + 0x7ae) | 2,
     *(int *)(param_1 + 0x344) == 0)) {
    *(undefined2 *)(param_1 + 0x7b0) = 0;
  }
  fVar5 = DAT_00314e8c;
  uVar2 = *(short *)(param_1 + 0x7b2) + 1;
  *(ushort *)(param_1 + 0x7b2) = uVar2;
  if (uVar2 < 0x31) {
    if (0x1f < uVar2) {
      *(float *)(param_1 + 0x54) = fVar5;
      goto LAB_00314e34;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x7b2) = 0;
  }
  fVar7 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x7b2) << 10));
  *(float *)(param_1 + 0x54) = (fVar1 + fVar7 * fVar5) * fVar5;
LAB_00314e34:
  if (*(ushort *)(param_1 + 0x7b2) < 0x11) {
    *(float *)(param_1 + 0x58) = fVar5;
    return;
  }
  fVar7 = (float)FUN_002cfca0((int)((uint)*(ushort *)(param_1 + 0x7b2) * 0x4000000 + -0x40000000) >>
                              0x10);
  *(float *)(param_1 + 0x58) = (fVar1 + fVar7 * fVar5) * fVar5;
  return;
}
