// OoT3D decomp @ 00174b4c  name=FUN_00174b4c  size=332

void FUN_00174b4c(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar8 = *(float *)(param_1 + 0x338);
  FUN_003731e0(param_1 + 0x2fc);
  uVar3 = DAT_00174ca0;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fe),(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar8) << 0x1e | (uint)(fVar8 <= fVar5) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    if (*(short *)(param_1 + 0x204) == 1) {
      *(short *)(param_1 + 0x1ea) = (short)DAT_00174c98;
      uVar3 = DAT_00174c9c;
    }
    else {
      fVar6 = (float)FUN_00371e50(DAT_00174ca0);
      fVar8 = DAT_00174ca8;
      fVar5 = DAT_00174ca4;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),(byte)(uVar4 >> 0x15) & 3)
      ;
      if ((int)(short)(int)(fVar7 * DAT_00174ca4) + (int)(short)(int)fVar6 < 1) {
        fVar6 = (float)FUN_00371e50(uVar3);
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),
                                           (byte)(uVar4 >> 0x15) & 3);
        fVar6 = (float)VectorSignedToFloat((int)(short)(int)(fVar7 * fVar5) + (int)(short)(int)fVar6
                                           ,(byte)(uVar4 >> 0x15) & 3);
        uVar2 = (undefined2)(int)(fVar6 * fVar8 * fVar5 - fVar5);
      }
      else {
        fVar6 = (float)FUN_00371e50(uVar3);
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),
                                           (byte)(uVar4 >> 0x15) & 3);
        fVar6 = (float)VectorSignedToFloat((int)(short)(int)(fVar7 * fVar5) + (int)(short)(int)fVar6
                                           ,(byte)(uVar4 >> 0x15) & 3);
        uVar2 = (undefined2)(int)(fVar5 + fVar6 * fVar8 * fVar5);
      }
      *(undefined2 *)(param_1 + 500) = uVar2;
      uVar3 = DAT_00174cac;
    }
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  }
  return;
}
