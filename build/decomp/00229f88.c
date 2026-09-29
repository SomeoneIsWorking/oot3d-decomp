// OoT3D decomp @ 00229f88  name=FUN_00229f88  size=1104

void FUN_00229f88(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;

  uVar4 = DAT_0022a2e0;
  iVar7 = *(int *)(DAT_0022a2dc + param_2);
  FUN_00372d4c(DAT_0022a2e0,DAT_0022a2e0,param_1 + 0xbc,0);
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar3 = uVar1 & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar3;
  if ((uVar3 == 0x23 || uVar3 == 0x24) || uVar3 == 0x32) {
    FUN_00353dd0(param_2,param_1 + 0x210);
    FUN_00353d24(param_2,param_1 + 0x210,param_1,DAT_0022a2e4);
  }
  *(undefined4 *)(param_1 + 0x1b8) = DAT_0022a2e8;
  FUN_0037572c(uVar4,param_1);
  uVar12 = DAT_0022a2f0;
  iVar5 = -1;
  iVar6 = 0;
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a2ec;
    FUN_00375bcc(param_1,uVar12);
  }
  else if (99 < *(short *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a2f4;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  }
  uVar14 = DAT_0022a330;
  uVar12 = DAT_0022a324;
  fVar9 = DAT_0022a2f8;
  sVar2 = *(short *)(param_1 + 0x1c);
  if (sVar2 == 0x27) {
LAB_0022a33c:
    FUN_0037572c(DAT_0022a438,param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a43c;
    uVar4 = DAT_0022a440;
    if (*(short *)(param_1 + 0x1c) == 0x29) {
      *(undefined2 *)(param_1 + 0x1a8) = 0x294;
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
    else {
      *(undefined2 *)(param_1 + 0x1a8) = 0x72;
      if ((uVar1 & 0xff00) == 0) {
        FUN_00375bcc(param_1,DAT_0022a444);
        FUN_00375bcc(param_1,DAT_0022a448);
      }
    }
    iVar5 = 1;
    iVar6 = param_1 + 0x274;
  }
  else {
    if (sVar2 < 0x28) {
      if (sVar2 == 0x23) {
        *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a320;
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(float *)(param_1 + 0x6c) = fVar9;
        FUN_00375bcc(param_1,uVar12);
        goto LAB_0022a3ac;
      }
      if (sVar2 == 0x24) {
        *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a328;
        *(undefined2 *)(param_1 + 0x1a8) = 0x30;
        *(undefined2 *)(param_1 + 0x1aa) = 0x4b;
        iVar5 = 2;
        iVar6 = param_1 + 0x278;
        *(undefined2 *)(DAT_0022a32c + param_1) = 0xf;
        *(undefined4 *)(param_1 + 0x1b8) = uVar14;
        fVar9 = DAT_0022a338;
        iVar7 = (int)*(short *)(param_1 + 0x34);
        fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x1e4) = fVar13 * DAT_0022a334;
        fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x250) = fVar13 * fVar9;
        fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x254) = fVar13 * fVar9;
        *(undefined4 *)(param_1 + 600) = uVar4;
        goto LAB_0022a3ac;
      }
      if (sVar2 == 0x26) {
        iVar5 = 5;
        iVar6 = param_1 + 0x27c;
        *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a2fc;
        *(undefined2 *)(param_1 + 0x1a8) = *(undefined2 *)(param_1 + 0x34);
        *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_1 + 0x36);
        goto LAB_0022a3ac;
      }
    }
    else {
      if (sVar2 == 0x28 || sVar2 == 0x29) goto LAB_0022a33c;
      if (sVar2 == 0x32) {
        if (*(short *)(param_1 + 0x34) == 0) {
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0022a304 + 0xe54),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x6c) = fVar13 + DAT_0022a308;
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = DAT_0022a300;
        }
        *(undefined4 *)(param_1 + 0x1a4) = DAT_0022a30c;
        *(undefined2 *)(param_1 + 0x1a8) = 0x69;
        *(undefined2 *)(param_1 + 0x1aa) = 3;
        fVar16 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
        fVar10 = *(float *)(iVar7 + 0x2c);
        fVar11 = *(float *)(param_1 + 0x2c);
        fVar15 = *(float *)(iVar7 + 0x30) - *(float *)(param_1 + 0x30);
        fVar8 = (float)FUN_003696ec(fVar16,fVar15);
        fVar13 = DAT_0022a310;
        *(short *)(param_1 + 0x36) = (short)(int)(fVar8 * DAT_0022a310);
        fVar9 = (float)FUN_003696ec((fVar10 + fVar9) - fVar11,
                                    SQRT(fVar16 * fVar16 + fVar15 * fVar15));
        uVar4 = DAT_0022a314;
        *(short *)(param_1 + 0x34) = (short)(int)(fVar9 * fVar13);
        *(undefined4 *)(param_1 + 0x250) = uVar4;
        *(undefined4 *)(param_1 + 0x254) = DAT_0022a318;
        *(undefined4 *)(param_1 + 600) = DAT_0022a31c;
        uVar4 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1f8);
        *(undefined4 *)(param_1 + 500) = uVar4;
        uVar14 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                                     (byte)(in_fpscr >> 0x15) & 3);
        uVar12 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                     (byte)(in_fpscr >> 0x15) & 3);
        uVar4 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                                    (byte)(in_fpscr >> 0x15) & 3);
        FUN_003591e4(uVar4,uVar12,uVar14,param_1 + 0x1f8,0xff,0xff,0xff,0xff,0);
        iVar5 = 5;
        iVar6 = param_1 + 0x27c;
        goto LAB_0022a3ac;
      }
    }
    iVar5 = 3;
    iVar6 = param_1 + 0x280;
  }
LAB_0022a3ac:
  *(undefined1 *)(param_1 + 0x284) = 0;
  if (iVar5 == -1) {
    uVar4 = FUN_00372f38(param_1,param_2,0);
    *(undefined4 *)(param_1 + 0x270) = uVar4;
    return;
  }
  uVar4 = FUN_00372f38(param_1,param_2,iVar6,iVar5,0);
  *(undefined4 *)(param_1 + 0x270) = uVar4;
  if (*(int *)(param_1 + 0x280) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x280) + 0xc);
    uVar4 = FUN_00372f0c(uVar4,2);
    FUN_00372d94(iVar7,uVar4);
    uVar4 = DAT_0022a44c;
    *(undefined1 *)(iVar7 + 0x10) = 1;
    *(undefined4 *)(iVar7 + 0xc) = uVar4;
  }
  return;
}
