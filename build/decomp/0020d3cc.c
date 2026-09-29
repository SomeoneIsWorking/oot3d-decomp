// OoT3D decomp @ 0020d3cc  name=FUN_0020d3cc  size=348

undefined4 FUN_0020d3cc(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  iVar2 = FUN_00363c10(param_1 + 0x3a58,0xc,param_3,param_4,param_4);
  fVar1 = DAT_0020d528;
  if (iVar2 < 0) {
    return 0;
  }
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
  param_3[0xe] = 0;
  fVar5 = (float)VectorSignedToFloat(param_4[0xb],(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0020d52c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)((fVar5 * fVar1) / fVar6);
  *(undefined2 *)(param_3 + 0x11) = *(undefined2 *)(param_4 + 9);
  *(undefined2 *)((int)param_3 + 0x56) = *(undefined2 *)((int)param_4 + 0x26);
  *(undefined2 *)((int)param_3 + 0x5a) = 0;
  *(short *)(param_3 + 0x16) = (short)iVar2;
  param_3[10] = DAT_0020d530;
  param_3[9] = DAT_0020d534;
  *(ushort *)((int)param_3 + 0x46) = (ushort)*(undefined4 *)(param_1 + 0xf8) & 0xf;
  *(undefined2 *)(param_3 + 0x12) = 0xff;
  *(undefined2 *)((int)param_3 + 0x4a) = 0xff;
  *(undefined2 *)(param_3 + 0x13) = 0x32;
  *(undefined2 *)((int)param_3 + 0x4e) = *(undefined2 *)(param_4 + 10);
  *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)((int)param_4 + 0x2a);
  iVar2 = FUN_0033a904(param_1,0,3,0x1e,6);
  param_3[0x1b] = iVar2;
  uVar3 = DAT_0020d538;
  *(undefined1 *)(*(int *)(iVar2 + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_3[0x1b] + 0xc) + 0xc) = uVar3;
  iVar2 = *(int *)(param_3[0x1b] + 0xc);
  uVar3 = FUN_00371e50(DAT_0020d53c);
  if (*DAT_0020d540 == 0) {
    *(undefined4 *)(iVar2 + 8) = uVar3;
    FUN_003586ec(iVar2);
  }
  return 1;
}
