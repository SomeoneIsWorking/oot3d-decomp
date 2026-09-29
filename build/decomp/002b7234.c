// OoT3D decomp @ 002b7234  name=FUN_002b7234  size=604

void FUN_002b7234(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 *param_12)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  int local_5c [8];
  undefined8 uStack_3c;

  fVar4 = DAT_002b7494;
  uVar3 = DAT_002b7490;
  uStack_3c = CONCAT44(param_2,param_1);
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_5c[2] = 0;
  local_5c[5] = 0;
  local_5c[3] = param_7;
  local_5c[4] = param_6;
  local_5c[7] = param_7;
  local_5c[6] = param_6;
  iVar1 = *(int *)(param_3 + 0x1a8) << 2;
  iVar5 = iVar1;
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 1;
    fVar10 = (float)VectorSignedToFloat(param_10,(byte)(in_fpscr >> 0x15) & 3);
    uVar8 = VectorSignedToFloat(local_5c[iVar6 * 2] + param_4,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(*(int *)(param_3 + 0x3cc) + iVar5 * 0xc) = uVar8;
    uVar8 = VectorSignedToFloat(local_5c[iVar6 * 2 + 1] + param_5,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(*(int *)(param_3 + 0x3cc) + iVar5 * 0xc + 4) = uVar8;
    *(undefined4 *)(iVar5 * 0xc + 8 + *(int *)(param_3 + 0x3cc)) = uVar3;
    fVar9 = (float)VectorSignedToFloat(local_5c[iVar6 * 2] + param_8,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(*(int *)(param_3 + 0x3d0) + iVar5 * 8) = fVar9 / fVar10;
    fVar10 = (float)VectorSignedToFloat(param_11,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(local_5c[iVar6 * 2 + 1] + param_9,
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(*(int *)(param_3 + 0x3d0) + iVar5 * 8 + 4) = fVar4 - fVar9 / fVar10;
    *(undefined4 *)(*(int *)(param_3 + 0x3d4) + iVar5 * 0x10) = *param_12;
    *(undefined4 *)(*(int *)(param_3 + 0x3d4) + iVar5 * 0x10 + 4) = param_12[1];
    *(undefined4 *)(*(int *)(param_3 + 0x3d4) + iVar5 * 0x10 + 8) = param_12[2];
    iVar6 = iVar5 * 0x10;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(param_3 + 0x3d4) + iVar6 + 0xc) = param_12[3];
    iVar6 = iVar7;
  } while (iVar7 < 4);
  if (*(int *)(param_3 + 0x1a8) == 0) {
    **(undefined2 **)(param_3 + 0x3d8) = 0;
    *(undefined2 *)(*(int *)(param_3 + 0x3d8) + 2) = 1;
    *(undefined2 *)(*(int *)(param_3 + 0x3d8) + 4) = 2;
    *(undefined2 *)(*(int *)(param_3 + 0x3d8) + 6) = 3;
    *(undefined2 *)(*(int *)(param_3 + 0x3d8) + 8) = 3;
    return;
  }
  iVar5 = *(int *)(param_3 + 0x1a8) * 6 + -1;
  sVar2 = (short)iVar1;
  *(short *)(*(int *)(param_3 + 0x3d8) + iVar5 * 2) = sVar2;
  *(short *)(*(int *)(param_3 + 0x3d8) + iVar5 * 2 + 2) = sVar2;
  *(short *)(*(int *)(param_3 + 0x3d8) + iVar5 * 2 + 4) = sVar2 + 1;
  *(short *)(*(int *)(param_3 + 0x3d8) + iVar5 * 2 + 6) = sVar2 + 2;
  *(short *)(*(int *)(param_3 + 0x3d8) + iVar5 * 2 + 8) = sVar2 + 3;
  *(short *)(*(int *)(param_3 + 0x3d8) + iVar5 * 2 + 10) = sVar2 + 3;
  return;
}
