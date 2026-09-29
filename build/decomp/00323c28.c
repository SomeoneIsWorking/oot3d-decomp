// OoT3D decomp @ 00323c28  name=FUN_00323c28  size=332

void FUN_00323c28(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;

  uVar4 = DAT_00323d8c;
  fVar2 = DAT_00323d88;
  piVar1 = DAT_00323d74;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00323d74 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_00323d78 / fVar6 + DAT_00323d7c) <= (int)(uint)*(ushort *)(param_2 + 0x22b8)) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00323d74 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(uint)*(ushort *)(param_2 + 0x22b8) <= (int)(DAT_00323d80 / fVar6 + DAT_00323d7c)) {
      iVar3 = *(int *)(DAT_00323d84 + param_2);
      uVar4 = *(undefined4 *)(iVar3 + 0x2c);
      uVar5 = *(undefined4 *)(iVar3 + 0x30);
      *(undefined4 *)(param_1 + 0xc4c) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(param_1 + 0xc50) = uVar4;
      *(undefined4 *)(param_1 + 0xc54) = uVar5;
      iVar3 = *piVar1;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x1474),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xc48) = fVar6 + fVar2;
      FUN_0034c664(param_1,param_1 + 0xc34,(int)(short)(*(short *)(iVar3 + 0x1476) + 0xc),2);
      return;
    }
  }
  FUN_00375a18(param_1 + 0xc3c,0,0x14,DAT_00323d8c,100);
  FUN_00375a18(param_1 + 0xc3e,0,0x14,uVar4,100);
  FUN_00375a18(param_1 + 0xc42,0,0x14,uVar4,100);
  FUN_00375a18(param_1 + 0xc44,0,0x14,uVar4,100);
  return;
}
