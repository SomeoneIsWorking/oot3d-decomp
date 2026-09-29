// OoT3D decomp @ 003df674  name=FUN_003df674  size=388

void FUN_003df674(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [2];
  short sStack_16;

  iVar5 = *(int *)(iRam003df7f8 + param_3);
  sVar1 = *(short *)(param_2 + 0x1aa) + -1;
  if (sVar1 == 0) {
    param_1 = uRam003df7fc;
  }
  *(short *)(param_2 + 0x1aa) = sVar1;
  if (sVar1 == 0) {
    *(undefined4 *)(param_2 + 0x70) = param_1;
  }
  *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + 0x2aa8;
  uVar4 = *(ushort *)(param_2 + 0x90);
  bVar6 = (uVar4 & 9) == 0;
  if (bVar6) {
    uVar4 = (ushort)*(byte *)(param_2 + 0x1bc);
  }
  bVar7 = (uVar4 & 2) == 0;
  bVar8 = bVar6 && bVar7;
  if (bVar6 && bVar7) {
    bVar8 = (*(byte *)(param_2 + 0x1bd) & 2) == 0;
  }
  if ((bVar8) && ((*(byte *)(param_2 + 0x1be) & 2) == 0)) {
    if (sVar1 == -0x1c2) {
      FUN_00374428(param_2);
    }
    return;
  }
  iVar3 = (int)*(char *)(iRam003df800 + iVar5);
  if (iVar3 != 1) {
    bVar6 = iVar3 != 2;
    if (!bVar6) {
      iVar3 = *(int *)(iRam003df804 + 4);
    }
    if (bVar6 || iVar3 != 0) goto LAB_003df764;
  }
  bVar2 = *(byte *)(param_2 + 0x1bc);
  if (((bVar2 & 2) != 0 && (bVar2 & 0x10) != 0) && (bVar2 & 4) != 0) {
    *(byte *)(param_2 + 0x1bc) = bVar2 & 0xe9 | 8;
    *(undefined4 *)(param_2 + 0x1c4) = 2;
    FUN_003624c8(iVar5 + 0x243c,auStack_18,0);
    *(short *)(param_2 + 0x36) = sStack_16 + -0x8000;
    *(undefined2 *)(param_2 + 0x1aa) = 0x2d;
    return;
  }
LAB_003df764:
  uStack_24 = *(undefined4 *)(param_2 + 0x28);
  fStack_20 = *(float *)(param_2 + 0x2c) + fRam003df808;
  uStack_1c = *(undefined4 *)(param_2 + 0x30);
  FUN_0036f9d0(uRam003df80c,param_3,&uStack_24,0,7,3,0xf,0xffffffff,10,0);
  FUN_00375c44(param_3,param_2 + 0x28,0x14,uRam003df810);
  FUN_00374428(param_2);
  return;
}
