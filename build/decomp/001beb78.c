// OoT3D decomp @ 001beb78  name=FUN_001beb78  size=528

void FUN_001beb78(int param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  if (*(short *)(param_1 + 0x1ba) == 0) {
    iVar3 = FUN_00371e40(param_1);
    uVar9 = DAT_001bed94;
    uVar8 = DAT_001bed90;
    uVar6 = DAT_001bed8c;
    fVar7 = DAT_001bed88;
    if (iVar3 == 0) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == DAT_001bed88) << 0x1e;
      if ((!SUB41(in_fpscr >> 0x1e,0)) && ((*(ushort *)(param_1 + 0x90) & 8) != 0)) {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x82);
        FUN_0037547c(uVar6,param_1 + 0x28,4,uVar9,uVar9,uVar8);
        *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_001bed98;
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
      }
      fVar4 = DAT_001beda0;
      piVar1 = DAT_001bed9c;
      if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
        fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001bed9c + 0x746),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003705a0(fVar7,fVar4 * DAT_001beda0,param_1 + 0x6c);
      }
      else {
        fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001bed9c + 0x748),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003705a0(fVar7,fVar5 * DAT_001beda0,param_1 + 0x6c);
        if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
          fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x74a),
                                             (byte)(in_fpscr >> 0x15) & 3);
          in_fpscr = in_fpscr & 0xfffffff |
                     (uint)(fVar7 * fVar4 <= *(float *)(param_1 + 100)) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            FUN_0037547c(uVar6,param_1 + 0x28,4,DAT_001bed94,DAT_001bed94,DAT_001bed90);
            fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x74c),
                                               (byte)(in_fpscr >> 0x15) & 3);
            *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * fVar7 * fVar4;
            *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
            goto LAB_001bed34;
          }
        }
        FUN_0034df30(param_1,param_2);
      }
      goto LAB_001bed34;
    }
    sVar2 = *(short *)(param_1 + 0x1ba) + 1;
  }
  else {
    iVar3 = FUN_0036c940();
    if (iVar3 == 0) goto LAB_001bed34;
    sVar2 = 0;
  }
  *(short *)(param_1 + 0x1ba) = sVar2;
LAB_001bed34:
  FUN_00376864(param_1);
  uVar9 = VectorSignedToFloat((int)*(short *)(param_1 + 0xb0),(byte)(in_fpscr >> 0x15) & 3);
  uVar8 = VectorSignedToFloat((int)*(short *)(param_1 + 0xb0),(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorSignedToFloat((int)*(short *)(param_1 + 0xb2),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00376340(uVar6,uVar8,uVar9,param_2,param_1,0x1d);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  return;
}
