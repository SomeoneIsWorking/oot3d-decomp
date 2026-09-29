// OoT3D decomp @ 00263818  name=FUN_00263818  size=408

undefined4 FUN_00263818(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  uVar3 = DAT_002639b0;
  local_28 = DAT_002639b0;
  local_24 = DAT_002639b0;
  local_20 = DAT_002639b0;
  local_2c = 0;
  param_3[6] = DAT_002639b0;
  param_3[7] = uVar3;
  param_3[8] = uVar3;
  param_3[3] = param_3[6];
  param_3[4] = param_3[7];
  param_3[5] = param_3[8];
  uVar8 = param_4[1];
  uVar9 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar8;
  param_3[2] = uVar9;
  param_3[0xe] = 0;
  uVar8 = DAT_002639c0;
  fVar5 = DAT_002639bc;
  fVar4 = DAT_002639b4;
  iVar7 = *DAT_002639b8;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)((int)param_4 + 0x12) +
                                      (int)*(short *)(param_4 + 4),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)((fVar10 * DAT_002639b4) / fVar11 + DAT_002639bc);
  *(short *)(param_3 + 0x18) = sVar1;
  *(undefined2 *)((int)param_3 + 0x5e) = 0;
  param_3[10] = uVar8;
  param_3[9] = DAT_002639c4;
  *(undefined2 *)((int)param_3 + 0x46) = *(undefined2 *)(param_4 + 3);
  *(undefined2 *)((int)param_3 + 0x4a) = *(undefined2 *)(param_4 + 3);
  *(undefined2 *)(param_3 + 0x12) = *(undefined2 *)((int)param_4 + 0xe);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 4),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  sVar2 = (short)(int)((fVar10 * fVar4) / fVar11 + fVar5);
  *(short *)((int)param_3 + 0x4e) = sVar2;
  *(undefined2 *)(param_3 + 0x13) = 0xff;
  *(short *)(param_3 + 0x14) = sVar1 - sVar2;
  uVar6 = FUN_00287d00(param_1,param_1 + 0xa98,param_4,&local_2c);
  local_3c = DAT_002639c8;
  *(undefined2 *)(param_3 + 0x11) = uVar6;
  local_30 = uVar3;
  local_38 = local_3c;
  local_34 = local_3c;
  iVar7 = 0;
  do {
    FUN_0034ea6c(*(undefined4 *)(param_3[0x1a] + iVar7 * 4),DAT_002639cc);
    FUN_0034ea48(*(undefined4 *)(param_3[0x1a] + iVar7 * 4),DAT_002639d0);
    FUN_003429c8(*(undefined4 *)(param_3[0x1a] + iVar7 * 4),1,&local_3c);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  return 1;
}
