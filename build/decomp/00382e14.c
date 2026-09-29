// OoT3D decomp @ 00382e14  name=FUN_00382e14  size=304

void FUN_00382e14(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  if (0 < *(short *)(param_1 + 0x1c2)) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  (**(code **)(param_1 + 0x1bc))();
  if (((*(short *)(param_1 + 0x1c0) == 0) &&
      (iVar3 = *(int *)(DAT_00382f5c + param_2), *(int *)(DAT_00382f60 + iVar3) == 0x200000)) &&
     (*(int *)(iVar3 + 0x78) != 0)) {
    fVar5 = *(float *)(iVar3 + 0x2c);
    iVar3 = 0;
    do {
      psVar4 = (short *)(DAT_00382f64 + iVar3 * 4);
      fVar6 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(fVar6 == fVar5) << 0x1e | (uint)(fVar5 <= fVar6) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        fVar6 = (float)VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = uVar1 | (uint)(fVar6 < fVar5) << 0x1f;
        in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(fVar5)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    switch(iVar3) {
    case 0:
    case 2:
    case 3:
    case 5:
      fVar5 = *(float *)(DAT_00382f6c + *(short *)(DAT_00382f68 + iVar3 * 2) * 4);
      break;
    case 1:
    case 4:
      psVar4 = (short *)(DAT_00382f68 + iVar3 * 2);
      fVar5 = *(float *)(DAT_00382f6c + *psVar4 * 4) - *(float *)(DAT_00382f6c + psVar4[1] * 4);
      break;
    default:
      goto switchD_00382ed0_default;
    }
    if (0x3f800000 < (int)ABS(fVar5)) {
      FUN_00368fc0(DAT_00382f74,DAT_00382f70,param_2,param_1,(int)*(short *)(param_1 + 0xbe),0);
      return;
    }
  }
switchD_00382ed0_default:
  return;
}
