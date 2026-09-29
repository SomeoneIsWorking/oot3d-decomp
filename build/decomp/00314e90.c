// OoT3D decomp @ 00314e90  name=FUN_00314e90  size=300

void FUN_00314e90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 uVar6;
  ushort uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;

  uVar4 = DAT_00314fd0;
  uVar3 = DAT_00314fcc;
  fVar2 = DAT_00314fc8;
  fVar1 = DAT_00314fc4;
  uVar6 = DAT_00314fc0;
  if ((*(int *)(param_1 + 0x98) < DAT_00314fbc) &&
     ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x27ffU <=
      DAT_00314fd4)) {
LAB_00314f60:
    *(undefined1 *)(param_1 + 0xa0d) = 0;
    FUN_00374a58(uVar6,param_1 + 0x228,10);
    uVar6 = FUN_0036ae14(param_1 + 0x228,10);
    fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x88c) = fVar9;
    *(float *)(param_1 + 0x890) = (fVar9 - fVar1) - fVar2;
    *(undefined4 *)(param_1 + 0x888) = uVar3;
    FUN_0048961c(uVar4);
    return;
  }
  psVar5 = (short *)(uint)*(ushort *)(param_1 + 0x90);
  bVar8 = (*(ushort *)(param_1 + 0x90) & 8) != 0;
  if (bVar8) {
    psVar5 = *(short **)(DAT_00314fd8 + param_2);
  }
  if (bVar8 && psVar5 != (short *)0x0) {
    do {
      if (((*psVar5 == DAT_00314fdc) &&
          (uVar7 = psVar5[0xe] & 0xff, (uVar7 == 0x10 || uVar7 == 0x11) || uVar7 == 0x16)) &&
         (fVar10 = *(float *)(param_1 + 0x28) - *(float *)(psVar5 + 0x14),
         fVar9 = *(float *)(param_1 + 0x30) - *(float *)(psVar5 + 0x18),
         (int)(fVar10 * fVar10 + fVar9 * fVar9) < DAT_00314fe0)) goto LAB_00314f60;
      psVar5 = *(short **)(psVar5 + 0x98);
    } while (psVar5 != (short *)0x0);
  }
  return;
}
