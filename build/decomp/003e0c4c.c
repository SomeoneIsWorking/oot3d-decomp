// OoT3D decomp @ 003e0c4c  name=FUN_003e0c4c  size=456

void FUN_003e0c4c(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_24 [2];
  short sStack_22;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;

  uVar3 = uRam003e0e18;
  iVar4 = *(int *)(iRam003e0e14 + param_2);
  sVar1 = *(short *)(param_1 + 0x8b0) + -1;
  *(short *)(param_1 + 0x8b0) = sVar1;
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x70) = uVar3;
  }
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 0x1554;
  uVar6 = *(ushort *)(param_1 + 0x90);
  if ((uVar6 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    fVar10 = *(float *)(param_1 + 0x6c) - fRam003e0e1c;
    *(float *)(param_1 + 0x6c) = fVar10;
    if ((int)fVar10 < 0x3f800000) {
      fVar10 = fRam003e0e20;
    }
    *(float *)(param_1 + 0x6c) = fVar10;
  }
  bVar7 = (uVar6 & 9) == 0;
  if (bVar7) {
    uVar6 = (ushort)*(byte *)(param_1 + 0x8d4);
  }
  bVar8 = (uVar6 & 2) == 0;
  bVar9 = bVar7 && bVar8;
  if (bVar7 && bVar8) {
    bVar9 = (*(byte *)(param_1 + 0x8d5) & 2) == 0;
  }
  if (((bVar9) && ((*(byte *)(param_1 + 0x8d6) & 2) == 0)) &&
     (*(int *)(param_1 + 0x84) != -0x39060000)) {
    if (sVar1 == -0x1c2) {
      FUN_00374428(param_1);
    }
    return;
  }
  iVar5 = (int)*(char *)(iRam003e0e24 + iVar4);
  if (iVar5 != 1) {
    bVar7 = iVar5 != 2;
    if (!bVar7) {
      iVar5 = *(int *)(iRam003e0e28 + 4);
    }
    if (bVar7 || iVar5 != 0) goto LAB_003e0d80;
  }
  bVar2 = *(byte *)(param_1 + 0x8d4);
  if (((bVar2 & 2) != 0 && (bVar2 & 0x10) != 0) && (bVar2 & 4) != 0) {
    *(byte *)(param_1 + 0x8d4) = bVar2 & 0xe9 | 8;
    *(undefined4 *)(param_1 + 0x8dc) = 2;
    FUN_00359450(iVar4,&uStack_54);
    FUN_003624c8(&uStack_54,auStack_24,0);
    *(short *)(param_1 + 0x36) = sStack_22 + -0x8000;
    *(undefined2 *)(param_1 + 0x8b0) = 0x2d;
    return;
  }
LAB_003e0d80:
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  fStack_18 = *(float *)(param_1 + 0x2c) + fRam003e0e2c;
  uStack_14 = *(undefined4 *)(param_1 + 0x30);
  uStack_54 = 0xf;
  uStack_50 = 7;
  uStack_4c = 10;
  uStack_48 = 1;
  FUN_0036f9d0(uRam003e0e30,param_2,&uStack_1c,0,1,2);
  FUN_00375c44(param_2,param_1 + 0x28,0x14,uRam003e0e34);
  FUN_00374428(param_1);
  return;
}
