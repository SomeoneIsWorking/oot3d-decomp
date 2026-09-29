// OoT3D decomp @ 002dc09c  name=FUN_002dc09c  size=684

void FUN_002dc09c(uint *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;

  bVar7 = (param_1[0x1f] & 1) != 0;
  if (bVar7) {
    FUN_0047dd5c(param_1);
  }
  fVar1 = DAT_002dc348;
  if ((param_1[0x1f] & 2) != 0) {
    fVar10 = (float)VectorSignedToFloat(param_1[8],(byte)(in_fpscr >> 0x15) & 3);
    FUN_0047db80((float)param_1[9] * fVar10 * DAT_002dc348,DAT_002dc34c,*param_1 & 0xff);
    bVar7 = true;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(ushort *)(param_1 + 0x1f) = (ushort)param_1[0x1f] | 0x20;
    }
  }
  if ((param_1[0x1f] & 4) != 0) {
    FUN_0047dbe0(DAT_002dc34c,*param_1 & 0xff,*(undefined1 *)((int)param_1 + 0xf));
    bVar7 = true;
  }
  if ((param_1[0x1f] & 8) != 0) {
    FUN_0047dc38(DAT_002dc34c,*param_1 & 0xff,(int)(short)param_1[4],
                 (int)*(short *)((int)param_1 + 0x12));
  }
  if ((param_1[0x1f] & 0x10) != 0) {
    FUN_0047dc98(DAT_002dc34c,*param_1 & 0xff,(int)(short)param_1[5],
                 (int)*(short *)((int)param_1 + 0x16),(int)(short)param_1[6],
                 (int)*(short *)((int)param_1 + 0x1a),(int)(short)param_1[7]);
  }
  if ((param_1[0x1f] & 0x20) == 0) {
    if (!bVar7) goto LAB_002dc330;
  }
  else {
    uVar5 = 2;
    uVar6 = 1;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      uVar5 = 0;
      fVar10 = (float)VectorSignedToFloat(param_1[8],(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)param_1[9] * fVar10 * fVar1;
      uVar6 = (int)(fVar10 * DAT_002dc350) <= DAT_002dc354;
      if (((bool)uVar6) && ((int)fVar10 < 0x3f800001)) {
        uVar6 = 2;
      }
    }
    else if (*(char *)((int)param_1 + 0xe) == '\x01') {
      uVar5 = 1;
    }
    FUN_0047db18(DAT_002dc34c,*param_1 & 0xff,uVar5,uVar6);
  }
  iVar2 = DAT_002dc364;
  param_1[10] = DAT_002dc358;
  uVar3 = *(ushort *)((int)param_1 + 0x1e) & 3;
  fVar10 = (float)VectorSignedToFloat(param_1[8],(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat(*(undefined4 *)
                                       ((*(ushort *)((int)param_1 + 0x1e) & 0xc) * 2 + DAT_002dc35c
                                        + uVar3 * 4 + -4),(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorFloatToUnsigned(DAT_002dc360 + fVar11 * (float)param_1[9] * fVar10 * fVar1,3);
  param_1[10] = uVar9;
  uVar9 = uVar9 + *(int *)(iVar2 + (uint)*(byte *)((int)param_1 + 0xe) * 8 + uVar3 * 4 + -4);
  param_1[10] = uVar9;
  iVar4 = 1;
  uVar9 = uVar9 + *(int *)(iVar2 + (uint)*(byte *)((int)param_1 + 0xf) * 8 + uVar3 * 4 + 0x14);
  param_1[10] = uVar9;
  uVar3 = param_1[0x16];
  bVar7 = uVar3 == 0;
  if (bVar7) {
    uVar3 = param_1[0x17];
  }
  bVar8 = bVar7 && uVar3 == 0;
  if (bVar7 && uVar3 == 0) {
    bVar8 = param_1[0x18] == 0;
  }
  bVar7 = false;
  if (bVar8) {
    bVar7 = param_1[0x19] == 0;
  }
  if (!bVar7) {
    iVar4 = 2;
  }
  uVar3 = param_1[0x1a];
  bVar7 = uVar3 == 0;
  if (bVar7) {
    uVar3 = param_1[0x1b];
  }
  bVar8 = bVar7 && uVar3 == 0;
  if (bVar7 && uVar3 == 0) {
    bVar8 = param_1[0x1c] == 0;
  }
  bVar7 = false;
  if (bVar8) {
    bVar7 = param_1[0x1d] == 0;
  }
  if (!bVar7) {
    iVar4 = iVar4 + 1;
  }
  param_1[10] = uVar9 + iVar4 * DAT_002dc368 * 8;
LAB_002dc330:
  *(ushort *)(param_1 + 0x1f) = (ushort)param_1[0x1f] & 0x8000;
  return;
}
