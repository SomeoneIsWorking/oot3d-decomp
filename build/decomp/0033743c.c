// OoT3D decomp @ 0033743c  name=FUN_0033743c  size=196

void FUN_0033743c(float param_1,float param_2,float param_3,int param_4,int param_5)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;

  fVar2 = DAT_00337508;
  uVar4 = in_fpscr & 0xfffffff | (uint)(param_2 <= param_1) << 0x1d;
  iVar3 = *DAT_00337504;
  if ((SUB41(uVar4 >> 0x1d,0)) &&
     (uVar4 = in_fpscr & 0xfffffff | (uint)(param_1 < param_3) << 0x1f |
              (uint)(param_1 == param_3) << 0x1e, bVar1 = (byte)(uVar4 >> 0x18), param_2 = param_3,
     (bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(param_1) || NAN(param_3)))) {
    fVar5 = DAT_00337508;
    if (param_5 == 0) goto LAB_003374c0;
  }
  else {
    param_1 = param_2;
    if (param_5 != 0) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x1a0),(byte)(uVar4 >> 0x15) & 3);
      fVar5 = fVar5 * DAT_00337500;
      goto LAB_003374c0;
    }
  }
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x1a0),(byte)(uVar4 >> 0x15) & 3);
LAB_003374c0:
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x1c6),(byte)(uVar4 >> 0x15) & 3);
  fVar5 = (float)FUN_00355780(fVar5,*(undefined4 *)(param_4 + 0x108),fVar6 * DAT_0033750c,
                              DAT_00337510);
  *(float *)(param_4 + 0x108) = fVar5;
  FUN_00355780(param_1,*(undefined4 *)(param_4 + 0x124),fVar2 / fVar5,DAT_00337514);
  return;
}
