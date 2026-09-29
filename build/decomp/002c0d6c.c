// OoT3D decomp @ 002c0d6c  name=FUN_002c0d6c  size=360

int FUN_002c0d6c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  uint local_20;
  int local_1c;
  int local_18;

  FUN_002c0134(*(undefined4 *)(param_1 + 0x94),&local_18);
  iVar2 = FUN_002c0d60(*(undefined4 *)(param_1 + 0x94));
  iVar2 = iVar2 - local_18;
  FUN_002c0d20(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154),&local_1c);
  if ((iVar2 < local_1c) && (local_1c = iVar2, iVar2 < 0)) {
    local_1c = 0;
  }
  iVar2 = 0;
  if (0 < local_1c) {
    do {
      local_20 = 0;
      FUN_004a1b60(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154),&local_20,
                   auStack_24,auStack_28,auStack_30);
      FUN_004a1aa8(*(undefined4 *)(param_1 + 0x94),local_20);
      FUN_002c1070(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154));
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1c);
  }
  FUN_002c0134(*(undefined4 *)(param_1 + 0x94),&local_18);
  FUN_00306a34(param_1 + 0x16c);
  cVar1 = *(char *)(param_1 + 0xc);
  FUN_003069cc(param_1 + 0x16c);
  if (((cVar1 == '\0') &&
      (FUN_002c0d20(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154),&local_20),
      local_20 < 0x20)) &&
     (cVar1 = FUN_002c0ef8(*(undefined4 *)(param_1 + 0x140)),
     (cVar1 != '\0' && cVar1 != '\x03') && cVar1 != '\x10')) {
    if (cVar1 != '\x11') {
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 10;
      FUN_003069cc(param_1 + 0x16c);
      return local_18;
    }
    FUN_00306a34(param_1 + 0x16c);
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_003069cc(param_1 + 0x16c);
  }
  FUN_002c0d20(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154),&local_20);
  return local_18;
}
