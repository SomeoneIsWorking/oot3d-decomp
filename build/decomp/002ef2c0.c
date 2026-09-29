// OoT3D decomp @ 002ef2c0  name=FUN_002ef2c0  size=928

void FUN_002ef2c0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;

  puVar9 = (undefined4 *)(param_1 + 0x14);
  iVar11 = 6;
  do {
    puVar9[1] = 0;
    iVar11 = iVar11 + -1;
    puVar9 = puVar9 + 2;
    *puVar9 = 0;
    iVar7 = DAT_002ef678;
    iVar4 = DAT_002ef668;
    iVar3 = DAT_002ef664;
    iVar2 = DAT_002ef660;
  } while (iVar11 != 0);
  if ((*(uint *)(DAT_002ef660 + 0xbc) & *(uint *)(DAT_002ef664 + 0x58)) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0xc)) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  iVar11 = DAT_002ef66c;
  if (*(char *)((uint)*(byte *)(iVar4 + 0xb) + DAT_002ef66c) == '\v') {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  puVar5 = DAT_002ef670;
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x58)) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  if ((puVar5[1] & 4) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 0xb) + iVar11) == '\v') {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  iVar6 = DAT_002ef674;
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x58)) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  iVar8 = DAT_002ef67c;
  if ((int)(*(uint *)(iVar2 + 0xb8) & *(uint *)(iVar6 + 0xc)) >> *(sbyte *)(iVar7 + 3) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  if (((uint)*(ushort *)(iVar2 + 0xb6) & *(int *)(iVar3 + 4) << *(sbyte *)(iVar8 + 3)) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  iVar7 = DAT_002ef680;
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 8)) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xec) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 7) + iVar11) != -1) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x34)) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xf8) & 0x400) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xee) & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xec) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 8) + iVar11) == '\b') {
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf4) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 0x12) + iVar11) == '\x12') {
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xec) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xf4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf0) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 10) + iVar11) == '\n') {
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf4) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if ((*(uint *)(iVar2 + 0xf50) & *(uint *)(iVar3 + 4)) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x30)) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x3c)) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xf4) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 10) + iVar11) == '\n') {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x44)) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf8) & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((*puVar5 & 0x400) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x10)) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((*(uint *)(iVar2 + 0xf50) & *(uint *)(iVar3 + 0x28)) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xec) & 0x8000) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 2;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x38)) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 10) + iVar11) == '\n') {
    *(undefined4 *)(param_1 + 0x3c) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf4) & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  *(undefined4 *)(param_1 + 0x40) = 2;
  if ((*(ushort *)(iVar7 + 0xec) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xf8) & 0x4000) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xec) & 0x8000) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if ((*(uint *)(iVar2 + 0xbc) & *(uint *)(iVar3 + 0x30)) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  if ((*(ushort *)(iVar7 + 0xf0) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 2;
  }
  if ((*(ushort *)(iVar7 + 0xf2) & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  if (*(char *)((uint)*(byte *)(iVar4 + 10) + iVar11) == '\n') {
    *(undefined4 *)(param_1 + 0x44) = 2;
  }
  if (((uint)*(ushort *)(iVar2 + 0xb6) & *(int *)(iVar3 + 4) << *(sbyte *)(iVar8 + 3)) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0xff;
  bVar1 = *(byte *)((uint)*(byte *)(iVar4 + 0x2d) + iVar11);
  if (*(int *)(iVar2 + 4) == 0) {
    if ((bVar1 < 0x2f) || (bVar1 == 0x30)) {
      *(undefined4 *)(param_1 + 0x48) = 8;
    }
    if (bVar1 == 0x2f || bVar1 == 0x31) {
      *(undefined4 *)(param_1 + 0x48) = 9;
    }
    if (bVar1 != 0x32) {
      if (bVar1 == 0x33 || bVar1 == 0x36) {
        *(undefined4 *)(param_1 + 0x48) = 7;
      }
      if (bVar1 == 0x34) {
        uVar10 = 0xb;
      }
      else {
        if (bVar1 != 0x35) {
          bVar12 = bVar1 == 0x37;
          if (bVar12) {
            bVar1 = *(byte *)(iVar2 + 0x52);
          }
          if (bVar12 && bVar1 == 0) {
            *(undefined4 *)(param_1 + 0x48) = 7;
          }
          return;
        }
        uVar10 = 3;
      }
      *(undefined4 *)(param_1 + 0x48) = uVar10;
      return;
    }
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  return;
}
