// OoT3D decomp @ 0018b218  name=FUN_0018b218  size=612

void FUN_0018b218(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;

  FUN_00372d4c(DAT_0018b484,DAT_0018b47c,param_1 + 0xbc,DAT_0018b480);
  FUN_00372f38(param_1,param_2,param_1 + 0x8b8,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,0,2,param_1 + 0x280,param_1 + 0x58c,0xf);
  FUN_00373d40(param_1 + 0x1fc,2);
  FUN_0035c358(param_1 + 0x8bc,param_1 + 0x1fc,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0018b488);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  uVar1 = DAT_0018b490;
  *(undefined4 *)(param_1 + 0x8b4) = DAT_0018b48c;
  *(undefined4 *)(param_1 + 0x8ac) = 2;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  FUN_0037572c(uVar1,param_1);
  if (*(short *)(param_2 + 0x104) == 0x5a) {
    *(undefined4 *)(param_1 + 0xfc) = DAT_0018b494;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = DAT_0018b498;
  }
  iVar4 = DAT_0018b4c4;
  uVar6 = DAT_0018b4b8;
  uVar3 = DAT_0018b4a4;
  iVar2 = DAT_0018b4a0;
  uVar1 = DAT_0018b49c;
  uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if (uVar5 == 5) {
    if (*(int *)(DAT_0018b4b4 + 4) == 0) {
LAB_0018b414:
      FUN_00374428(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x8aa) = 0;
  }
  else if (uVar5 < 6) {
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
      *(undefined1 *)(param_1 + 0x8aa) = 2;
      uVar6 = uVar3;
    }
    else if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0x8aa) = 1;
      uVar5 = *(ushort *)(iVar2 + 0xfe);
      uVar6 = DAT_0018b4b0;
      if ((((uVar5 & 1) == 0 || (uVar5 & 2) == 0) || (uVar5 & 4) == 0) || (uVar5 & 8) == 0)
      goto LAB_0018b460;
    }
    else {
      if (uVar5 != 4) goto LAB_0018b464;
      *(undefined1 *)(param_1 + 0x8aa) = 1;
      uVar5 = *(ushort *)(iVar2 + 0xfe);
      bVar7 = (uVar5 & 1) == 0;
      bVar8 = (uVar5 & 2) == 0;
      bVar9 = (uVar5 & 4) == 0;
      bVar10 = (uVar5 & 8) != 0;
      uVar6 = (uint)uVar5;
      if (((!bVar7 && !bVar8) && !bVar9) && bVar10) {
        uVar6 = DAT_0018b4a8;
      }
      if (((bVar7 || bVar8) || bVar9) || !bVar10) {
        uVar6 = DAT_0018b4ac;
      }
    }
  }
  else if (uVar5 == 0x45) {
    if (*(char *)((uint)*(byte *)(DAT_0018b4bc + 3) + DAT_0018b4c0) == -1) goto LAB_0018b414;
    *(undefined1 *)(param_1 + 0x1f) = 3;
    *(undefined1 *)(param_1 + 0x8aa) = 0;
    uVar6 = DAT_0018b4c8;
    if ((*(ushort *)(iVar4 + 0x8a) & 0x100) == 0) {
      uVar5 = *(ushort *)(iVar2 + 0xfe);
      bVar7 = (uVar5 & 1) == 0;
      bVar8 = (uVar5 & 2) == 0;
      bVar9 = (uVar5 & 4) == 0;
      bVar10 = (uVar5 & 8) != 0;
      uVar6 = (uint)uVar5;
      if (((!bVar7 && !bVar8) && !bVar9) && bVar10) {
        uVar6 = DAT_0018b4cc;
      }
      if (((bVar7 || bVar8) || bVar9) || !bVar10) goto LAB_0018b460;
    }
  }
  else {
    if (uVar5 != 0x46) goto LAB_0018b464;
    *(undefined1 *)(param_1 + 0x8aa) = 1;
    uVar5 = *(ushort *)(iVar2 + 0xfe);
    uVar6 = DAT_0018b4d4;
    if ((((uVar5 & 1) == 0 || (uVar5 & 2) == 0) || (uVar5 & 4) == 0) || (uVar5 & 8) == 0) {
LAB_0018b460:
      *(undefined4 *)(param_1 + 0x8b0) = uVar1;
      goto LAB_0018b464;
    }
  }
  *(uint *)(param_1 + 0x8b0) = uVar6;
LAB_0018b464:
  *(undefined2 *)(DAT_0018b4d0 + param_1) = 0;
  return;
}
