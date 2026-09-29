// OoT3D decomp @ 0018d190  name=FUN_0018d190  size=944

void FUN_0018d190(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;

  *(undefined1 *)(param_1 + 0xb94) = 0;
  if (*(short *)(param_2 + 0x104) == 0x20) {
    *(undefined1 *)(param_1 + 0xb94) = 1;
  }
  if (*(short *)(param_1 + 0x1c) < 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  else {
    if (*(short *)(param_1 + 0x1c) == 0xb) {
      if (*(char *)(param_2 + 0x7f5e) != '\0') goto LAB_0018d208;
      *(undefined1 *)(param_2 + 0x7f5e) = 1;
      *(undefined1 *)(param_1 + 3) = 0xff;
    }
    if (*(short *)(param_1 + 0x1c) == 0xc) {
      if (*(char *)(param_2 + 0x7f5f) != '\0') {
LAB_0018d208:
        FUN_00374428(param_1);
        return;
      }
      *(undefined1 *)(param_2 + 0x7f5f) = 1;
      *(undefined1 *)(param_1 + 3) = 0xff;
    }
  }
  iVar13 = param_1;
  iVar10 = param_2;
  FUN_003510b0(param_1,DAT_0018d558);
  uVar2 = DAT_0018d560;
  uVar8 = DAT_0018d55c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  FUN_00372d4c(DAT_0018d564,uVar8,param_1 + 0xbc,uVar2);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar7 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018d568 + iVar7) != 0)
     ) {
    iVar7 = iVar7 + 0x3a5c;
  }
  else {
    iVar7 = 0;
  }
  uVar8 = ObjectBankArchive_00358ef8(iVar7 + 0x10,0);
  FUN_00353e78(iVar7 + 0x10,param_2,param_1 + 0x1a4,uVar8,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x3fc,9,iVar13,iVar10);
  iVar10 = 0;
  do {
    FUN_00372f38(param_1,param_2,param_1 + iVar10 * 0x3c + 0x71c,1,0);
    uVar5 = DAT_0018d580;
    uVar2 = DAT_0018d57c;
    uVar8 = DAT_0018d578;
    iVar4 = DAT_0018d574;
    iVar3 = DAT_0018d570;
    iVar7 = DAT_0018d56c;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x14);
  if (*(short *)(param_2 + 0x104) == 0x52) {
    iVar10 = 0;
    iVar11 = DAT_0018d56c + 0x54;
    do {
      pfVar9 = (float *)(iVar7 + iVar10 * 0xc);
      if ((((int)ABS(*(float *)(param_1 + 0x28) - *pfVar9) < iVar3) &&
          ((int)ABS(*(float *)(param_1 + 0x30) - pfVar9[2]) < iVar3)) &&
         (*(short *)(param_1 + 0x628) = (short)iVar10,
         (*(ushort *)(iVar4 + 0x42) & *(ushort *)(iVar11 + iVar10 * 2)) != 0)) {
        *(undefined4 *)(param_1 + 0x28) = uVar8;
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        *(undefined2 *)(param_1 + 0x1c) = 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 7);
  }
  FUN_0036df4c(param_1 + 0x62c,param_1 + 0x28);
  FUN_0036df4c(param_1 + 0x638,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x684) = DAT_0018d584;
  FUN_0037572c(DAT_0018d588,param_1);
  fVar12 = (float)FUN_00371e50(DAT_0018d58c);
  sVar6 = (short)(int)fVar12 + 5;
  *(short *)(param_1 + 0x622) = sVar6;
  if (sVar6 < 0) {
    *(undefined2 *)(param_1 + 0x622) = 1;
  }
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ushort *)(DAT_0018d594 + 0xee) & 0x10;
    goto joined_r0x0018d494;
  case 2:
    if (*(int *)(DAT_0018d590 + 0x10) != 0) break;
    goto LAB_0018d4ac;
  case 3:
    uVar1 = *(ushort *)(DAT_0018d594 + 0xee) & 0x10;
    goto joined_r0x0018d4a8;
  case 4:
    *(undefined4 *)(param_1 + 0x70) = DAT_0018d564;
    break;
  case 5:
    uVar1 = *(ushort *)(DAT_0018d594 + 0xee) & 0x100;
joined_r0x0018d494:
    if (uVar1 != 0) {
LAB_0018d4ac:
      FUN_00374428(param_1);
    }
    break;
  case 7:
    uVar1 = *(ushort *)(DAT_0018d594 + 0xee) & 0x100;
joined_r0x0018d4a8:
    if (uVar1 != 0) break;
    goto LAB_0018d4ac;
  case 0xd:
    *(undefined4 *)(param_1 + 0x70) = DAT_0018d564;
  case 0xe:
    *(undefined1 *)(param_1 + 0xb6) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  FUN_00353dd0(param_2);
  sVar6 = *(short *)(param_1 + 0x1c);
  if (sVar6 == 10) {
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
  }
  else if (sVar6 != 0xd && sVar6 != 0xe) {
    FUN_00353d24(param_2,param_1 + 0x68c,iVar13,DAT_0018d5c0);
    goto LAB_0018d5b0;
  }
  FUN_00353d24(param_2,param_1 + 0x68c,iVar13,DAT_0018d598);
  if ((*(short *)(param_2 + 0x104) == 0x34) && ((*(ushort *)(DAT_0018d594 + 0xee) & 0x4000) == 0)) {
    FUN_00374428(iVar13);
  }
LAB_0018d5b0:
  *(undefined4 *)(param_1 + 0x5d0) = DAT_0018d5c4;
  return;
}
