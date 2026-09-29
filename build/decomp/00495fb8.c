// OoT3D decomp @ 00495fb8  name=FUN_00495fb8  size=528

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00495fb8(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x60;
  FUN_0036b4ec(param_1 + 0x254,param_2);
  FUN_002c205c(param_2,param_1);
  FUN_0032ebe8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x28,DAT_004961c8);
  iVar3 = FUN_003518dc(param_1,param_2);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 == 0) {
    FUN_0036055c(param_2,param_1,DAT_0034540c,0);
    uVar6 = 0x89;
    if ((*(uint *)(DAT_00345410 + param_1) & 0x8000) != 0) {
      uVar6 = 0x22c;
    }
    FUN_00359aa0(param_1 + 0x254,param_2,uVar6);
    *(undefined2 *)(DAT_00345414 + param_1) = 1;
    if (*(char *)(param_1 + 0x1749) != '\x03') {
      *(undefined1 *)(param_1 + 0x1749) = 0;
      iVar3 = DAT_0034541c;
      *(undefined4 *)(DAT_0034541c + 0xcc) = DAT_00345418;
      *(undefined1 *)(iVar3 + 0xd4) = 0;
    }
    return;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * DAT_004961cc;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = FUN_003758b0(fVar10 * DAT_004961cc,fVar8 * DAT_004961cc);
  fVar2 = DAT_004961dc;
  fVar10 = DAT_004961d4;
  fVar8 = DAT_004961d0;
  iVar7 = iVar4;
  if (*(char *)(param_1 + 0x2237) != '\0') {
    iVar7 = (int)(short)((short)iVar4 + -0x8000);
  }
  bVar1 = *(float *)(param_1 + 0x221c) < DAT_004961d0;
  iVar5 = iVar4;
  if (bVar1) {
    iVar5 = iVar4 + 0x8000;
  }
  if (bVar1) {
    iVar4 = (int)(short)iVar5;
  }
  fVar11 = (DAT_004961d4 - fVar9) * DAT_004961d8;
  fVar12 = DAT_004961d0;
  if ((DAT_004961d0 <= fVar11) && (fVar12 = fVar11, DAT_004961e0 < (int)fVar11)) {
    fVar12 = DAT_004961dc;
  }
  fVar13 = fVar12 * fVar12 * DAT_004961e4;
  fVar11 = *(float *)(DAT_004961e8 + 0x144) * DAT_004961ec;
  iVar3 = FUN_00331030(param_2 + 0xa98,iVar3,*(undefined1 *)(param_1 + 0x81));
  if (iVar3 != 1) {
    fVar11 = fVar2;
  }
  if (iVar3 != 1) {
    fVar12 = fVar8;
  }
  if ((int)fVar13 < 0x3f800000) {
    fVar13 = fVar10;
  }
  iVar3 = FUN_002dd714(fVar12,fVar13,fVar9 * fVar11,param_1 + 0x221c);
  if ((iVar3 != 0) && (fVar12 == fVar8)) {
    iVar3 = DAT_004961f0 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
    if (*(char *)(param_1 + 0x2237) == '\0') {
      uVar6 = *(undefined4 *)(iVar3 + 0x4b0);
    }
    else {
      uVar6 = *(undefined4 *)(iVar3 + 0x4c8);
    }
    FUN_0033f7ac(param_1,uVar6,param_2);
  }
  FUN_00375a18(param_1 + 0x2220,(int)(short)iVar4,10,4000);
  FUN_00370378(param_1 + 0xbe,iVar7,2000);
  return;
}
