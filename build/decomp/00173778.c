// OoT3D decomp @ 00173778  name=FUN_00173778  size=292

undefined4 FUN_00173778(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;

  uVar1 = FUN_003769d8(param_1 + 0x28a0);
  uVar4 = (uint)*(byte *)(param_2 + 0x479);
  if ((((uVar4 == 10 || uVar4 == 5) || uVar4 == 2) || uVar4 == 1) && (uVar4 != uVar1)) {
    *(char *)(param_2 + 0x478) = *(char *)(param_2 + 0x478) + '\x01';
  }
  *(char *)(param_2 + 0x479) = (char)uVar1;
  iVar2 = DAT_001738c0;
  switch(uVar1) {
  default:
    return 1;
  case 2:
    break;
  case 5:
    iVar2 = FUN_00346964(param_1);
    if (iVar2 == 0) {
      return 1;
    }
    return 2;
  }
  uVar1 = (uint)*(ushort *)(DAT_001738b4 + param_2);
  if (uVar1 == DAT_001738b8) {
    uVar3 = *(ushort *)(DAT_001738bc + 0x12) | 0x20;
  }
  else {
    if ((int)uVar1 < (int)DAT_001738b8) {
      if (uVar1 == 0x1028) {
        *(ushort *)(DAT_001738c0 + 0xec) = *(ushort *)(DAT_001738c0 + 0xec) | 0x8000;
        return 0;
      }
      if (uVar1 != 0x102f) {
        if (uVar1 != 0x1033) {
          return 0;
        }
        return 2;
      }
      *(ushort *)(DAT_001738c0 + 0xec) = *(ushort *)(DAT_001738c0 + 0xec) | 4;
      *(ushort *)(iVar2 + 0x110) = *(ushort *)(iVar2 + 0x110) | 0x1000;
      return 0;
    }
    if (uVar1 - DAT_001738b8 == 7) {
      return 2;
    }
    if (uVar1 - DAT_001738b8 != 0x10) {
      return 0;
    }
    uVar3 = *(ushort *)(DAT_001738bc + 0x12) | 0x200;
  }
  *(ushort *)(DAT_001738bc + 0x12) = uVar3;
  return 0;
}
