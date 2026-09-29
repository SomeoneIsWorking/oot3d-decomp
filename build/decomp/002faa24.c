// OoT3D decomp @ 002faa24  name=FUN_002faa24  size=332

int FUN_002faa24(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_24;

  uVar1 = FUN_0048be88(param_2);
  iVar5 = uVar1 * 0x48;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      local_40 = 0;
      local_3c = 0;
      iVar2 = FUN_0048bea4(param_2,uVar6 | 0x4000000,&local_40);
      bVar7 = iVar2 != 0;
      uVar4 = 0;
      if (bVar7) {
        uVar4 = local_3c;
      }
      uVar3 = uVar4;
      if (bVar7 && uVar4 != 0) {
        uVar3 = local_40;
      }
      if (((bVar7 && uVar4 != 0) && uVar3 != 0) && -1 < (int)uVar3) {
        if ((uVar3 & 1) != 0) {
          iVar5 = (local_3c + 3 & 0xfffffffc) + (iVar5 + 0x3fU & 0xffffffe0);
        }
        iVar2 = (int)local_40 >> 1;
        if (iVar2 != 0) {
          uVar4 = local_3c + 3 & 0xfffffffc;
          do {
            iVar2 = iVar2 + -1;
            iVar5 = uVar4 + ((iVar5 + 0x3fU & 0xffffffe0) + uVar4 + 0x3f & 0xffffffe0);
          } while (iVar2 != 0);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  iVar2 = FUN_0048c138(param_2,&local_38);
  if (iVar2 != 0) {
    iVar5 = local_34 * 0xcc +
            (local_30 * DAT_002fab74 + 3U & 0xfffffffc) +
            (local_38 * DAT_002fab70 + 3U & 0xfffffffc) + iVar5 +
            (local_24 * (DAT_002fab70 + -0x70) + 3U & 0xfffffffc);
  }
  return iVar5;
}
