// OoT3D decomp @ 003ad9c0  name=FUN_003ad9c0  size=660

void FUN_003ad9c0(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_28;
  
  bVar5 = *(short *)(param_1 + 0x61a) == 0x2d;
  if (*(short *)(param_1 + 0x61a) < 0x2e) {
    bVar5 = *(short *)(param_1 + 0x61e) == 0;
  }
  if (bVar5) {
    FUN_00373264(param_1,DAT_003adc54);
  }
  else {
    FUN_00373264(param_1,DAT_003adc58);
  }
  if (*(short *)(param_1 + 0x61a) != 0) {
    sVar1 = *(short *)(param_1 + 0x61a) + -1;
    uVar3 = (uint)sVar1;
    *(short *)(param_1 + 0x61a) = sVar1;
    if (uVar3 != 0) {
      bVar5 = uVar3 == 0x2d;
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x616) * 0x2000
      ;
      fVar9 = DAT_003adc68;
      fVar8 = DAT_003adc64;
      fVar7 = DAT_003adc60;
      if (bVar5) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x61e);
      }
      if (!bVar5 || uVar3 != 0) {
        return;
      }
      iVar4 = 0;
      if (DAT_003adc5c < *(int *)(param_1 + 0x98)) {
        do {
          fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
          FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xa3,0,
                       (int)(short)((short)(int)(((fVar6 * fVar7) / fVar8) * fVar9) +
                                   *(short *)(param_1 + 0x92)),0,(int)(short)iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        return;
      }
      do {
        fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xa3,0,
                     (int)(short)((short)(int)(((fVar6 * fVar7) / fVar8) * fVar9) +
                                 *(short *)(param_1 + 0x92)),0,(int)(short)((ushort)iVar4 | 0x8000))
        ;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
      return;
    }
  }
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = ABS(fVar7 - fVar9);
  local_28 = DAT_003adc6c;
  FUN_00373500(fVar8,DAT_003adc74,DAT_003adc70,&local_28);
  fVar7 = local_28 * ((fVar7 - fVar9) / fVar8);
  local_28 = ABS(fVar7);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + (short)(int)fVar7;
  if ((int)local_28 < 0x12d) {
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  }
  if (*(short *)(param_1 + 0xbe) != *(short *)(param_1 + 0x36)) {
    return;
  }
  uVar2 = FUN_003758b0(*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10),
                       *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8));
  *(undefined2 *)(param_1 + 0x612) = uVar2;
  *(short *)(param_1 + 0x614) = *(short *)(param_1 + 0x616) >> 0x1f;
  *(ushort *)(param_1 + 0x61c) = ((ushort)*(undefined4 *)(param_2 + 0xf8) & 7) + 2;
  uVar2 = FUN_003702c8(0x1e,0x78);
  *(undefined2 *)(param_1 + 0x61a) = uVar2;
  FUN_003717ac(param_1 + 0x1a4,DAT_003adc78,3);
  *(undefined4 *)(param_1 + 0x22c) = DAT_003adc7c;
  return;
}

