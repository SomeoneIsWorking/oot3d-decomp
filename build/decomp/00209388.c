// OoT3D decomp @ 00209388  name=FUN_00209388  size=476

undefined4 FUN_00209388(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  FUN_0036b4ec();
  iVar2 = FUN_00355a60(param_1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x128) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x1224) == 0) {
      *(int *)(param_1 + 0x1224) = *(int *)(param_1 + 0x128);
      FUN_0036f59c(param_1,DAT_00209564);
    }
  }
  iVar2 = FUN_0033b384(param_2,param_1);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(DAT_00209568 + 0x4c);
    bVar4 = uVar3 != 0;
    if (!bVar4) {
      uVar3 = *(uint *)(param_1 + 0x29b8);
    }
    if (((bVar4 || (uVar3 & 0x2000) != 0) ||
        ((*(short *)(param_1 + 0x2248) < 0 && (*(int *)(DAT_00209568 + 0x50) != 0)))) ||
       (('\0' < *(char *)(DAT_0020956c + param_2) &&
        ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *DAT_00209570) != 0)))) {
      *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xffffdfff;
      sVar1 = *(short *)(param_1 + 0x2248);
      if (sVar1 < 0) {
        sVar1 = -sVar1;
      }
      *(short *)(param_1 + 0x2248) = sVar1;
      iVar2 = FUN_0033603c(param_1,param_2);
      if (iVar2 == 0) {
        return 1;
      }
      iVar2 = FUN_00355a60(param_1);
      if (iVar2 == 0) {
        FUN_003604f0(param_1 + 0x1764,param_2,DAT_00209574);
        return 1;
      }
      *(undefined1 *)(param_1 + 0x221a) = 1;
      return 1;
    }
  }
  if (*(short *)(param_1 + 0x2218) != 0) {
    *(short *)(param_1 + 0x2218) = *(short *)(param_1 + 0x2218) + -1;
  }
  iVar2 = FUN_003518cc(param_1);
  if (iVar2 == 0) {
    bVar4 = (DAT_00209578 & *(uint *)(param_1 + 0x1710)) == 0;
    uVar3 = DAT_00209578;
    if (bVar4) {
      uVar3 = (uint)*(byte *)(param_1 + 0x1749);
    }
    if ((bVar4 && uVar3 == 0) && (*(uint *)(param_1 + 0x1710) & 0x100000) == 0) {
      iVar2 = FUN_00355a60(param_1);
      if (iVar2 == 0) {
        FUN_0035d27c(param_1,DAT_00209580);
        FUN_003604f0(param_1 + 0x1764,param_2,DAT_00209584);
      }
      else {
        FUN_0035d27c(param_1,DAT_0020957c);
      }
      *(undefined2 *)(param_1 + 0x2218) = 0;
      return 1;
    }
  }
  if (*(short *)(param_1 + 0x2218) == 0) {
    *(undefined2 *)(param_1 + 0x2218) = 1;
  }
  return 1;
}
