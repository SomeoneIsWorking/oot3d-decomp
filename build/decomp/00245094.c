// OoT3D decomp @ 00245094  name=FUN_00245094  size=404

void FUN_00245094(int param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint unaff_r6;
  uint in_fpscr;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;

  piVar3 = DAT_00245228;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00245228 + 0x149a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (fVar10 + DAT_0024522c) - DAT_00245230;
  uVar8 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1c4) == fVar10) << 0x1e |
          (uint)(fVar10 <= *(float *)(param_1 + 0x1c4)) << 0x1d;
  bVar2 = (byte)(uVar8 >> 0x18);
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
    FUN_0037547c(DAT_0024523c,param_1 + 0x28,4,DAT_00245238,DAT_00245238,DAT_00245234);
  }
  *(short *)(param_1 + 0x1be) = *(short *)(param_1 + 0x1be) + *(short *)(param_1 + 0x1b6);
  *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + *(short *)(param_1 + 0x1b4);
  *(short *)(param_1 + 0x1ba) = *(short *)(param_1 + 0x1ba) + *(short *)(param_1 + 0x1b2);
  *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + *(short *)(*piVar3 + 0x1498) + 1000;
  iVar4 = FUN_0037571c(param_2);
  puVar5 = (ushort *)0x0;
  if (iVar4 != 0) {
    puVar5 = *(ushort **)(param_2 + 0x22f0);
  }
  iVar7 = 0;
  if (iVar4 == 0) {
    puVar5 = (ushort *)0x0;
  }
  uVar6 = 0;
  if (puVar5 != (ushort *)0x0) {
    unaff_r6 = (uint)*puVar5;
    uVar6 = *(uint *)(param_1 + 0x1ac);
  }
  if (puVar5 != (ushort *)0x0 && unaff_r6 != uVar6) {
    if (unaff_r6 == 1) {
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    else if (unaff_r6 == 2) {
      iVar4 = FUN_0037571c(param_2);
      if (iVar4 != 0) {
        iVar7 = *(int *)(param_2 + 0x22f0);
      }
      if (iVar7 != 0) {
        uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),(byte)(uVar8 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar9;
        uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x10),(byte)(uVar8 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar9;
        uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x14),(byte)(uVar8 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar9;
        uVar1 = *(undefined2 *)(iVar7 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      *(undefined4 *)(param_1 + 0x1a4) = 1;
      *(undefined4 *)(param_1 + 0x1a8) = 1;
    }
    else if (unaff_r6 == 3) {
      *(undefined4 *)(param_1 + 0x1a4) = 2;
      *(undefined4 *)(param_1 + 0x1a8) = 1;
    }
    *(uint *)(param_1 + 0x1ac) = unaff_r6;
  }
  return;
}
