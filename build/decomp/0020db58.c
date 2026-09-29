// OoT3D decomp @ 0020db58  name=FUN_0020db58  size=236

undefined4
FUN_0020db58(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  fVar6 = DAT_0020dc48;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  uVar3 = param_4[4];
  uVar4 = param_4[5];
  param_3[3] = param_4[3];
  param_3[4] = uVar3;
  param_3[5] = uVar4;
  uVar3 = param_4[7];
  uVar4 = param_4[8];
  param_3[6] = param_4[6];
  param_3[7] = uVar3;
  param_3[8] = uVar4;
  uVar3 = DAT_0020dc50;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0020dc44 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)(fVar6 / fVar5 + DAT_0020dc4c);
  *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)(param_4 + 9);
  *(undefined2 *)(param_3 + 0x11) = 0xff;
  fVar6 = (float)FUN_00371e50(uVar3);
  *(short *)(param_3 + 0x12) = (short)(int)fVar6 + -0x19;
  uVar3 = DAT_0020dc54;
  bVar1 = *(byte *)((int)param_4 + 0x26);
  uVar4 = 0xb;
  *(ushort *)((int)param_3 + 0x4a) = (ushort)bVar1;
  param_3[10] = uVar3;
  if (bVar1 < 100) {
    uVar4 = 0xf;
  }
  param_3[9] = DAT_0020dc58;
  iVar2 = FUN_0035010c(0xc);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_003356c8();
  }
  param_3[0x1c] = uVar3;
  TorchAnimationModel_00350508(uVar3,param_1,0,uVar4);
  return 1;
}
