// OoT3D decomp @ 0029a3b4  name=FUN_0029a3b4  size=704

void FUN_0029a3b4(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;

  *(undefined4 *)(param_1 + 0x1c4) = DAT_0029a674;
  FUN_0037572c(DAT_0029a678,param_1);
  uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    *(undefined4 *)(param_1 + 0x140) = DAT_0029a680;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
    FUN_00372f38(param_1,param_2,param_1 + 0x1c8,10,0);
    return;
  }
  if (uVar2 == 1) {
    FUN_00372f38(param_1,param_2,param_1 + 0x1c8,0xe,0);
    if (((*(short *)(param_2 + 0x104) == 7) && (*(char *)(DAT_0029a684 + param_2) == '\v')) &&
       (*(char *)(DAT_0029a688 + 0xe) != '\0')) {
      FUN_00372f38(param_1,param_2,param_1 + 0x1cc,0xe,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1cc) = 0;
    }
    if ((~(int)*(short *)(param_1 + 0x1c) & 0xff00U) == 0 ||
        ((int)*(short *)(param_1 + 0x1c) & 0x4000U) == 0) {
      uVar4 = FUN_00353fd4(param_1,param_2,2);
    }
    else {
      uVar4 = FUN_00353fd4(param_1,param_2,4);
    }
    uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
    uVar4 = DAT_0029a68c;
    if ((~(*(short *)(param_1 + 0x1c) >> 8) & 0x3fU) != 0) {
      *(undefined4 *)(param_1 + 0x140) = DAT_0029a694;
      *(undefined4 *)(param_1 + 0x1c4) = DAT_0029a698;
      *(undefined2 *)(param_1 + 0x1c2) = 0;
      *(undefined2 *)(param_1 + 0x1c0) = 0;
      *(undefined2 *)(param_1 + 0x1be) = 0;
      *(undefined2 *)(param_1 + 0x1bc) = 0;
      iVar3 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
      if (iVar3 != 0) {
        *(undefined2 *)(param_1 + 0x1be) = 0x40;
        *(ushort *)(param_1 + 0x1bc) = *(ushort *)(param_1 + 0x1bc) | 2;
        return;
      }
      FUN_0036b940(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
      return;
    }
    *(undefined4 *)(param_1 + 0x140) = DAT_0029a690;
    *(undefined4 *)(param_1 + 0x1c4) = uVar4;
    return;
  }
  if (uVar2 == 2) {
    *(undefined4 *)(param_1 + 0x1c4) = DAT_0029a67c;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined2 *)(param_1 + 0x1c0) = 0;
    *(undefined2 *)(param_1 + 0x1be) = 0;
    *(undefined2 *)(param_1 + 0x1bc) = 0;
    iVar3 = FUN_0036e864(param_2,(((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a) + 1);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0x1be) = 0x40;
      *(ushort *)(param_1 + 0x1bc) = *(ushort *)(param_1 + 0x1bc) | 4;
    }
    iVar3 = FUN_0036e864(param_2,(((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a) + 2);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0x1c0) = 0x40;
      *(ushort *)(param_1 + 0x1bc) = *(ushort *)(param_1 + 0x1bc) | 8;
    }
    sVar1 = *(short *)(param_1 + 0x1be);
    bVar5 = sVar1 == 0;
    if (bVar5) {
      sVar1 = *(short *)(param_1 + 0x1c0);
    }
    if (bVar5 && sVar1 == 0) {
      FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
      return;
    }
    FUN_00375c10();
  }
  return;
}
