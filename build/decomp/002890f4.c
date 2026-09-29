// OoT3D decomp @ 002890f4  name=FUN_002890f4  size=504

void FUN_002890f4(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  uVar5 = DAT_00289324;
  fVar12 = DAT_0028931c;
  fVar11 = DAT_00289318;
  fVar4 = DAT_00289310;
  uVar3 = DAT_0028930c;
  uVar2 = DAT_00289308;
  iVar7 = DAT_00289304;
  fVar1 = DAT_00289300;
  fVar13 = DAT_002892fc;
  fVar10 = DAT_002892ec;
  uVar6 = (uint)*(ushort *)(param_1 + 0xe86);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002892f0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_002892f4 / fVar9 + DAT_002892f8) < (int)uVar6) {
    if (uVar6 == 0) {
      iVar8 = 0;
    }
    else {
      fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      iVar8 = (int)(DAT_002892f8 + fVar10 * DAT_002892fc * DAT_00289300);
    }
    uVar6 = iVar8 * 2;
    iVar8 = (int)((longlong)(int)uVar6 * (longlong)DAT_00289304 + ((ulonglong)uVar6 << 0x20) >> 0x20
                 );
    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -7 + uVar6;
    FUN_00327b50(DAT_0028930c,DAT_00289308,param_1,param_2,iVar8);
    uVar6 = iVar8 + 1;
    iVar7 = (int)((longlong)(int)uVar6 * (longlong)iVar7 + ((ulonglong)uVar6 << 0x20) >> 0x20);
    FUN_00327b50(uVar3,uVar2,param_1,param_2,((iVar7 >> 2) - (iVar7 >> 0x1f)) * -7 + uVar6);
  }
  else {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002892f0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_002892f4 / fVar9 + DAT_002892f8) == uVar6) {
      *(undefined4 *)(param_1 + 0x140) = DAT_00289314;
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xbe) = (short)(int)(fVar11 + fVar12 * fVar13 * fVar1 * fVar10 * fVar4);
    }
    else if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 0xe8c) = DAT_00289320;
      FUN_0037572c(uVar5,param_1);
    }
    else {
      fVar13 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xbe) =
           (short)(int)(fVar10 + fVar13 * DAT_002892fc * DAT_00289300 * DAT_002892ec * DAT_00289310)
      ;
      FUN_0037572c(fVar12 + *(float *)(param_1 + 0x54) * fVar11,param_1);
    }
  }
  uVar2 = DAT_00289328;
  if (*(short *)(param_1 + 0xe86) != 0) {
    *(short *)(param_1 + 0xe86) = *(short *)(param_1 + 0xe86) + -1;
  }
  FUN_00373264(param_1,uVar2);
  return;
}
