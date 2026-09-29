// OoT3D decomp @ 003798f0  name=FUN_003798f0  size=532

void FUN_003798f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;

  uVar6 = DAT_00379b2c;
  uVar5 = DAT_00379b28;
  iVar9 = DAT_00379b24;
  fVar12 = DAT_00379b1c;
  fVar4 = DAT_00379b18;
  fVar13 = DAT_00379b14;
  fVar3 = DAT_00379b10;
  fVar2 = DAT_00379b0c;
  piVar1 = DAT_00379b04;
  sVar11 = 0;
  uVar7 = (uint)*(ushort *)(param_1 + 0xe86);
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00379b04 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_00379b08 / fVar14 + DAT_00379b0c) < (int)uVar7) {
    sVar10 = *(short *)(param_1 + 0xbe);
joined_r0x003799b8:
    if (uVar7 != 0) {
      fVar12 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
LAB_00379aa0:
      sVar11 = (short)(int)(fVar2 + fVar12 * fVar13 * fVar4);
    }
  }
  else {
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00379b04 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_00379b10 / fVar14 + DAT_00379b0c) < (int)uVar7) {
      FUN_0037572c(*(float *)(param_1 + 0x54) * DAT_00379b1c,param_1);
      uVar7 = (uint)*(ushort *)(param_1 + 0xe86);
      sVar10 = *(short *)(param_1 + 0xbe);
      goto joined_r0x003799b8;
    }
    if (uVar7 == 0) {
      *(undefined4 *)(param_1 + 0xe8c) = DAT_00379b20;
      *(undefined4 *)(param_1 + 0x140) = 0;
      goto LAB_00379ab4;
    }
    fVar14 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = (int)(DAT_00379b0c + fVar14 * DAT_00379b14 * DAT_00379b18) * 2;
    iVar8 = (int)((longlong)(int)uVar7 * (longlong)DAT_00379b24 + ((ulonglong)uVar7 << 0x20) >> 0x20
                 );
    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -7 + uVar7;
    FUN_00327b50(DAT_00379b2c,DAT_00379b28,param_1,param_2,iVar8);
    uVar7 = iVar8 + 1;
    iVar9 = (int)((longlong)(int)uVar7 * (longlong)iVar9 + ((ulonglong)uVar7 << 0x20) >> 0x20);
    FUN_00327b50(uVar6,uVar5,param_1,param_2,((iVar9 >> 2) - (iVar9 >> 0x1f)) * -7 + uVar7);
    FUN_0037572c(*(float *)(param_1 + 0x54) * fVar12,param_1);
    sVar10 = *(short *)(param_1 + 0xbe);
    if (*(ushort *)(param_1 + 0xe86) != 0) {
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(param_1 + 0xe86),(byte)(in_fpscr >> 0x15) & 3);
      goto LAB_00379aa0;
    }
  }
  *(short *)(param_1 + 0xbe) = (0x18 - sVar11) * (short)DAT_00379b30 + sVar10;
LAB_00379ab4:
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if ((int)(fVar3 / fVar13 + fVar2) == (uint)*(ushort *)(param_1 + 0xe86)) {
    FUN_00375bcc(param_1,DAT_00379b34);
  }
  if (*(short *)(param_1 + 0xe86) != 0) {
    *(short *)(param_1 + 0xe86) = *(short *)(param_1 + 0xe86) + -1;
  }
  return;
}
