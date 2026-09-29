// OoT3D decomp @ 00486620  name=FUN_00486620  size=244

void FUN_00486620(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  switch(*param_1) {
  case 0:
    iVar3 = 1;
    if (1 < param_2 + 1) {
      while (fVar4 = *(float *)(param_1 + 4),
            *(float *)(param_1 + 4) = fVar4 * *(float *)(param_1 + 0x10),
            0xbcffffff < (uint)(fVar4 * *(float *)(param_1 + 0x10))) {
        iVar3 = iVar3 + 1;
        if (param_2 + 1 <= iVar3) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 4) = DAT_00486728;
      *param_1 = 1;
      sVar2 = *(short *)(param_1 + 0x14);
LAB_004866a8:
      *(short *)(param_1 + 0x16) = sVar2;
      return;
    }
    break;
  case 1:
    uVar1 = *(ushort *)(param_1 + 0x16);
    if (param_2 < (int)(uint)uVar1) {
      sVar2 = uVar1 - (short)param_2;
      goto LAB_004866a8;
    }
    param_2 = param_2 - (uint)uVar1;
    *(undefined2 *)(param_1 + 0x16) = 0;
    *param_1 = 2;
  case 2:
    fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(DAT_0048672c + (uint)(byte)param_1[0x18] * 2)
                                       ,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = *(float *)(param_1 + 4) - *(float *)(param_1 + 8) * fVar5;
    *(float *)(param_1 + 4) = fVar5;
    if (fVar5 < fVar4) {
      *(float *)(param_1 + 4) = fVar4;
      *param_1 = 3;
    }
    return;
  case 4:
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xc) * fVar4;
    return;
  }
  return;
}
