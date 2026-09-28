// OoT3D decomp @ 00210a80  name=FUN_00210a80  size=532

void FUN_00210a80(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;

  FUN_0037572c(uRam00210c94);
  func_0x00372f38(param_1,param_2,param_1 + 0x8f8,0,0);
  func_0x00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x568,0x10);
  *(undefined4 *)(param_1 + 0x8fc) = 1;
  *(ushort *)(param_1 + 0x8b6) = *(ushort *)(param_1 + 0x1c) >> 8;
  *(ushort *)(param_1 + 0x8b8) = *(ushort *)(param_1 + 0x1c) & 0xff;
  iVar1 = iRam00210c98;
  *(undefined4 *)(param_1 + 0x8d0) =
       *(undefined4 *)(iRam00210c98 + *(short *)(param_1 + 0x8b6) * 0x20);
  *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 4)
  ;
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 8)
  ;
  *(undefined4 *)(param_1 + 0x8dc) =
       *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 0xc);
  *(undefined4 *)(param_1 + 0x8e0) =
       *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 0x10);
  *(undefined4 *)(param_1 + 0x8e4) =
       *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 0x14);
  *(undefined4 *)(param_1 + 0x8e8) =
       *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 0x18);
  *(undefined4 *)(param_1 + 0x8ec) =
       *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x8b6) * 0x20 + 0x1c);
  uVar3 = uRam00210ca0;
  iVar1 = iRam00210c9c;
  if (*(short *)(param_1 + 0x8b8) == 3) {
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(iVar1 + iVar5 * 0xc);
      func_0x0036aa20(*puVar2,puVar2[1],puVar2[2],param_2 + 0x208c,param_1,param_2,uVar3,0,0,0,3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  uVar4 = (uint)*(ushort *)(iRam00210ca8 + 0xc);
  if (*(short *)(param_1 + 0x8b6) == 5) {
    bVar6 = uVar4 == uRam00210ca4;
    if (uVar4 <= uRam00210ca4) {
      bVar6 = *(int *)(iRam00210ca8 + 0x10) == 0;
    }
    bVar7 = false;
    if (bVar6) {
      bVar7 = (*(ushort *)(iRam00210ca8 + 0xefc) & 1) == 0;
    }
    uVar3 = uRam00210cb0;
    if (!bVar7) goto LAB_00210c88;
  }
  else if (((uVar4 < uRam00210ca4) || (*(int *)(iRam00210ca8 + 0x10) == 0)) &&
          (uVar3 = uRam00210cac, (*(ushort *)(iRam00210ca8 + 0xefc) & 1) == 0)) {
LAB_00210c88:
    *(undefined4 *)(param_1 + 0x8a8) = uVar3;
    return;
  }
  func_0x00374428(param_1);
  return;
}
