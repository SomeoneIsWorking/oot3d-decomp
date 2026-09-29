// OoT3D decomp @ 00280510  name=FUN_00280510  size=884

void FUN_00280510(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  undefined2 uVar6;
  short *psVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  iVar1 = DAT_002808a0;
  if (*(short *)(param_1 + 0x1e8) != 0) {
    *(short *)(param_1 + 0x1e8) = *(short *)(param_1 + 0x1e8) + -1;
  }
  if (*(short *)(param_1 + 0x1ea) != 0) {
    *(short *)(param_1 + 0x1ea) = *(short *)(param_1 + 0x1ea) + -1;
  }
  if (*(short *)(param_1 + 500) != 0) {
    *(short *)(param_1 + 500) = *(short *)(param_1 + 500) + -1;
  }
  if (*(short *)(param_1 + 0x1ec) != 0) {
    *(short *)(param_1 + 0x1ec) = *(short *)(param_1 + 0x1ec) + -1;
  }
  if (*(short *)(param_1 + 0x1ee) != 0) {
    *(short *)(param_1 + 0x1ee) = *(short *)(param_1 + 0x1ee) + -1;
  }
  if (*(short *)(param_1 + 0x1f0) != 0) {
    *(short *)(param_1 + 0x1f0) = *(short *)(param_1 + 0x1f0) + -1;
  }
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0x1a4) != iVar1) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  }
  fVar3 = DAT_002808a8;
  fVar2 = DAT_002808a4;
  *(short *)(param_1 + 0x1f2) = *(short *)(param_1 + 0x1f2) + 1;
  uVar4 = DAT_002808ac;
  psVar7 = (short *)(param_1 + 0x200);
  if (*(short *)(param_1 + 0x1fa) == 0) goto switchD_002805dc_caseD_0;
  switch(*psVar7) {
  default:
    goto switchD_002805dc_caseD_0;
  case 1:
    if (*(char *)(param_1 + 0x208) == '\0') {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_002808b0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_002808b4;
    }
    break;
  case 2:
    *(undefined2 *)(param_1 + 0x204) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 0;
    fVar9 = (float)FUN_00371e50(fVar2);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)(short)(int)(fVar8 * fVar3) + (int)(short)(int)fVar9 < 1) {
      fVar9 = (float)FUN_00371e50(fVar2);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat((int)(short)(int)(fVar8 * fVar3) + (int)(short)(int)fVar9,
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * fVar2 * fVar3 - fVar3;
    }
    else {
      fVar9 = (float)FUN_00371e50(fVar2);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat((int)(short)(int)(fVar8 * fVar3) + (int)(short)(int)fVar9,
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar3 + fVar9 * fVar2 * fVar3;
    }
    *(short *)(param_1 + 500) = (short)(int)fVar9;
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
switchD_002805dc_caseD_0:
    if (*psVar7 == 0) goto LAB_00280710;
    break;
  case 3:
    *(undefined2 *)(param_1 + 0x204) = 1;
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002808bc;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002808c0;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002808c4;
  }
  *psVar7 = 0;
LAB_00280710:
  uVar4 = DAT_002808b8;
  if ((*(short *)(param_1 + 0x1f0) == 0) &&
     (sVar5 = *(short *)(param_1 + 0x1f8) + 1, *(short *)(param_1 + 0x1f8) = sVar5, 2 < sVar5)) {
    *(undefined2 *)(param_1 + 0x1f8) = 0;
    fVar9 = (float)FUN_00371e50(uVar4);
    if ((short)(int)fVar9 + 0x14 < 1) {
      fVar9 = (float)FUN_00371e50(uVar4);
      fVar9 = (float)VectorSignedToFloat((short)(int)fVar9 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = (undefined2)(int)(fVar9 * fVar2 * fVar3 - fVar3);
    }
    else {
      fVar9 = (float)FUN_00371e50(uVar4);
      fVar9 = (float)VectorSignedToFloat((short)(int)fVar9 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = (undefined2)(int)(fVar3 + fVar9 * fVar2 * fVar3);
    }
    *(undefined2 *)(param_1 + 0x1f0) = uVar6;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(DAT_002808c8,DAT_002808c8,uVar4,param_2,param_1,0x1d);
  if (*(short *)(param_1 + 0x1fa) != 0) {
    FUN_0037632c(param_1,param_1 + 0x2a4);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x2a4);
    return;
  }
  FUN_0035479c(param_1 + 0x224,param_1 + 0x1b8,param_1 + 0x1c4,param_1 + 0x1d0,param_1 + 0x1dc);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x224);
  return;
}
