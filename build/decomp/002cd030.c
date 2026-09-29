// OoT3D decomp @ 002cd030  name=FUN_002cd030  size=624

void FUN_002cd030(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined2 *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;

  iVar1 = *(int *)(param_1 + 0xfa4) + -1;
  *(int *)(param_1 + 0xfa4) = iVar1;
  if (0 < iVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xfa4) = 0;
  FUN_00494ce0(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0xf38) = 0;
  iVar1 = DAT_002cd2a0;
  uVar6 = *(int *)(param_1 + 0xf40) - 0xc2;
  bVar8 = 3 < uVar6;
  bVar7 = uVar6 == 4;
  if (4 < uVar6) {
    uVar6 = *(int *)(param_1 + 0xf40) - 0xfa;
    bVar8 = 2 < uVar6;
    bVar7 = uVar6 == 3;
  }
  if (!bVar8 || bVar7) {
    *(undefined2 *)(DAT_002cd2a0 + 0xb2) = 0x140;
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x7f40) = 0xd3;
  }
  iVar2 = *(int *)(param_1 + 0xf40);
  if (((((iVar2 != 0x301f && iVar2 != 10) && iVar2 != 0xc) && iVar2 != 0xcf) && iVar2 != 0x21c) &&
      iVar2 != 9) {
    bVar7 = iVar2 == 0x4078 || iVar2 == 0x2015;
    if (iVar2 != 0x4078 && iVar2 != 0x2015) {
      bVar7 = iVar2 == 0x3040;
    }
    if (!bVar7) goto LAB_002cd0d8;
  }
  *(undefined2 *)(iVar1 + 0x7e) = 3;
LAB_002cd0d8:
  iVar3 = FUN_0037571c(*(undefined4 *)(param_1 + 8));
  iVar2 = DAT_002cd2a4;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xf40);
    bVar7 = iVar3 == 0x2061 || iVar3 == 0x2025;
    if (iVar3 != 0x2061 && iVar3 != 0x2025) {
      bVar7 = iVar3 == 0x208c;
    }
    if (!bVar7) {
      bVar7 = iVar3 == 0x3055;
    }
    if (((!bVar7) &&
        (((5 < iVar3 - 0x88dU || (*(int *)(param_1 + 0xfc4) != 0)) &&
         (*(int *)(DAT_002cd2a4 + 8) < DAT_002cd2a8)))) &&
       (*(short *)(*(int *)(param_1 + 8) + 0xa64) == 0)) {
      if (*(ushort *)(iVar1 + 0x7e) < 3) {
        *(undefined2 *)(iVar1 + 0x7e) = 0x32;
      }
      *(undefined2 *)(iVar1 + 0x7a) = 0;
      FUN_0034be04(*(undefined2 *)(iVar1 + 0x7e));
    }
  }
  uVar6 = *(int *)(param_1 + 0xf40) - 0x88d;
  bVar7 = uVar6 == 5;
  if (uVar6 < 6) {
    bVar7 = *(int *)(param_1 + 0xfc4) == 1;
  }
  if (bVar7) {
    FUN_003655d0(1,0xf);
  }
  iVar1 = DAT_002cd2ac;
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x2dd6) = 0;
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x2dd8) = 0;
  if (*(char *)(iVar1 + *(int *)(param_1 + 8)) == '@') {
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x2b7e) = 2;
  }
  if ((*(uint *)(iVar2 + 0xbc) & 0xf0000000) == 0x40000000) {
    *(uint *)(iVar2 + 0xbc) = *(uint *)(iVar2 + 0xbc) ^ 0x40000000;
    *(short *)(iVar2 + 0x42) = *(short *)(iVar2 + 0x42) + 0x10;
    *(short *)(iVar2 + 0x44) = *(short *)(iVar2 + 0x44) + 0x10;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x20ac);
  if (*(short *)(*(int *)(param_1 + 8) + 0x2b80) != 0x31) {
    psVar4 = (short *)FUN_002c2a20();
    iVar2 = DAT_002cd2b0;
    if (*psVar4 == 6) {
      *(undefined2 *)(DAT_002cd2b0 + iVar1) = 0xff20;
      iVar1 = *(int *)(iVar2 + -4 + iVar1);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x10000;
    }
    iVar1 = *(int *)(param_1 + 8);
    if ((*(short *)(iVar1 + 0x2b80) == 0x29) &&
       (*(short *)(iVar1 + 0x2b7e) == 1 || *(short *)(iVar1 + 0x2b7e) == 0xb)) {
      *(undefined2 *)(iVar1 + 0x2b7e) = 4;
      if (*(short *)(*(int *)(param_1 + 8) + 0x2b82) == 9) {
        *(undefined2 *)(*(int *)(param_1 + 8) + 0x2b7e) = 1;
      }
    }
  }
  puVar5 = (undefined2 *)FUN_002c2a20();
  *puVar5 = 0xff;
  return;
}
