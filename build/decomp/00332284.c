// OoT3D decomp @ 00332284  name=FUN_00332284  size=8

uint FUN_00332284(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  pcVar3 = DAT_00332578;
  if (*DAT_00332578 == '\0') {
    return 0xffffffff;
  }
  if ((*(ushort *)(param_1 + 0x194) & 0x20) != 0) {
    *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) | 0x20;
    return 0xffffffff;
  }
  if ((*(uint *)(DAT_0033257c + *(short *)(param_1 + 0x18a) * 8) &
      1 << (param_2 & 0xff) & 0x3fffffffU) == 0) {
    if (*(short *)(param_1 + 0x18c) == 0) {
      *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) | 0x22;
      return 0;
    }
    *(undefined2 *)(param_1 + 0x18c) = 0;
    FUN_002c0a9c(param_1,0);
    *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xeff7 | 4;
    return param_2 | 0xc0000000;
  }
  *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) | 0x22;
  if ((int)*(short *)(param_1 + 0x18c) == param_2) {
    return 0xffffffff;
  }
  uVar4 = FUN_002c0a9c(param_1,param_2);
  if (param_2 == 6) {
    uVar4 = 0x20;
  }
  *(undefined4 *)(pcVar3 + 0xa0) = 0;
  if (param_2 == 6) goto LAB_003323e8;
  if ((int)param_2 < 7) {
    if (param_2 == 1) goto LAB_003323e4;
    if (param_2 == 2) {
      puVar7 = *(ushort **)(param_1 + 0xf0);
      bVar9 = puVar7 == (ushort *)0x0;
      if (!bVar9) {
        puVar7 = (ushort *)(uint)*puVar7;
      }
      if (bVar9 || puVar7 == (ushort *)0x32) goto LAB_003323ec;
      uVar4 = 8;
      goto LAB_003323e8;
    }
    if (param_2 == 3) goto LAB_003323e4;
    if (param_2 == 4) {
      uVar4 = 4;
      goto LAB_003323e8;
    }
  }
  else {
    if ((param_2 != 8 && param_2 != 0xf) && param_2 != 0x13) goto LAB_003323ec;
LAB_003323e4:
    uVar4 = 2;
LAB_003323e8:
    *(undefined4 *)(pcVar3 + 0xa0) = uVar4;
  }
LAB_003323ec:
  uVar5 = (uint)*(short *)(param_1 + 0x18c);
  if (uVar5 == 6) {
    uVar5 = *(uint *)(pcVar3 + 0xa0) & 0x20;
joined_r0x0033247c:
    if (uVar5 != 0) {
      *(undefined2 *)(param_1 + 0x1a6) = 10;
    }
  }
  else if ((int)uVar5 < 7) {
    if (uVar5 == 0) {
      uVar5 = *(uint *)(pcVar3 + 0xa0) & 0x10;
      goto joined_r0x0033247c;
    }
    if (uVar5 == 1) {
      uVar6 = *(uint *)(pcVar3 + 0xa0);
      uVar5 = uVar6 & 0x10;
    }
    else if (uVar5 == 2) {
      uVar6 = *(uint *)(pcVar3 + 0xa0);
      uVar5 = uVar6 & 8;
    }
    else {
      if (uVar5 != 4) goto LAB_003324c0;
      uVar6 = *(uint *)(pcVar3 + 0xa0);
      uVar5 = uVar6 & 4;
    }
    if (uVar5 != 0) {
      *(undefined2 *)(param_1 + 0x1a6) = 10;
    }
    *(uint *)(pcVar3 + 0xa0) = uVar6 | 1;
  }
  else {
    bVar10 = uVar5 == 8;
    bVar9 = uVar5 == 0xf;
    bVar1 = uVar5 == 0x11;
    bVar2 = uVar5 == 0x13;
    if (((bVar10 || bVar9) || bVar1) || bVar2) {
      uVar5 = *(uint *)(pcVar3 + 0xa0);
    }
    if (((bVar10 || bVar9) || bVar1) || bVar2) {
      uVar5 = uVar5 | 1;
    }
    if (((bVar10 || bVar9) || bVar1) || bVar2) {
      *(uint *)(pcVar3 + 0xa0) = uVar5;
    }
  }
LAB_003324c0:
  uVar5 = *(uint *)(pcVar3 + 0xa0) & 0xffffffef;
  *(uint *)(pcVar3 + 0xa0) = uVar5;
  if ((*(short *)(param_1 + 0x188) != 7) || (uVar5 == 1)) goto LAB_00332534;
  iVar8 = DAT_00332580 + -0x2b;
  if (uVar5 == 2) {
    if (*(char *)(*(int *)(param_1 + 0xd4) + 0x4c33) == '\x01') goto LAB_00332518;
  }
  else if (uVar5 == 4) {
LAB_00332518:
    iVar8 = DAT_00332580;
  }
  else if (uVar5 != 8) goto LAB_00332534;
  FUN_0037547c(iVar8,0,4,DAT_00332588,DAT_00332588,DAT_00332584);
LAB_00332534:
  *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xeff7 | 4;
  *(short *)(param_1 + 0x18c) = (short)param_2;
  return param_2 | 0x80000000;
}

