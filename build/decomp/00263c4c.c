// OoT3D decomp @ 00263c4c  name=FUN_00263c4c  size=392

undefined4
FUN_00263c4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  fVar2 = DAT_00263dd4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  param_3[3] = param_4[3];
  param_3[4] = uVar5;
  param_3[5] = uVar6;
  uVar5 = param_4[7];
  uVar6 = param_4[8];
  param_3[6] = param_4[6];
  param_3[7] = uVar5;
  param_3[8] = uVar6;
  fVar3 = DAT_00263ddc;
  iVar4 = *DAT_00263dd8;
  fVar8 = (float)VectorSignedToFloat(param_4[0xc],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)((fVar8 * fVar2) / fVar9 + DAT_00263ddc);
  *(short *)(param_3 + 0x18) = sVar1;
  if ((int)param_4[0xc] < 0) {
    *(short *)(param_3 + 0x18) = -sVar1;
    param_3[9] = DAT_00263de0;
    param_3[0xe] = 0;
    *(undefined2 *)((int)param_3 + 0x56) = *(undefined2 *)((int)param_4 + 0x2e);
    *(undefined2 *)((int)param_3 + 0x5a) = 0;
  }
  else {
    param_3[0xe] = 0;
    uVar5 = DAT_00263de4;
    if (*(char *)(param_4 + 0xe) == '\0') {
      uVar5 = DAT_00263de8;
    }
    param_3[9] = uVar5;
    *(ushort *)((int)param_3 + 0x56) = (ushort)*(byte *)((int)param_4 + 0x2b);
    *(undefined2 *)((int)param_3 + 0x5a) = *(undefined2 *)((int)param_4 + 0x2e);
  }
  iVar7 = 0;
  param_3[10] = DAT_00263dec;
  *(undefined2 *)(param_3 + 0x11) = *(undefined2 *)(param_4 + 0xd);
  *(undefined2 *)((int)param_3 + 0x46) = *(undefined2 *)((int)param_4 + 0x36);
  *(ushort *)(param_3 + 0x12) = (ushort)*(byte *)(param_4 + 9);
  *(ushort *)((int)param_3 + 0x4a) = (ushort)*(byte *)((int)param_4 + 0x25);
  *(ushort *)(param_3 + 0x13) = (ushort)*(byte *)((int)param_4 + 0x26);
  *(ushort *)((int)param_3 + 0x4e) = (ushort)*(byte *)((int)param_4 + 0x27);
  *(ushort *)(param_3 + 0x14) = (ushort)*(byte *)(param_4 + 10);
  *(ushort *)((int)param_3 + 0x52) = (ushort)*(byte *)((int)param_4 + 0x29);
  *(ushort *)(param_3 + 0x15) = (ushort)*(byte *)((int)param_4 + 0x2a);
  *(undefined2 *)(param_3 + 0x16) = *(undefined2 *)(param_4 + 0xb);
  fVar8 = (float)VectorSignedToFloat(param_4[0xc],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x17) = (short)(int)((fVar8 * fVar2) / fVar9 + fVar3);
  do {
    FUN_0034ea48(*(undefined4 *)(param_3[0x1a] + iVar7 * 4),DAT_00263df0);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return 1;
}
