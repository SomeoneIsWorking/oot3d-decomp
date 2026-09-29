// OoT3D decomp @ 00429784  name=FUN_00429784  size=664

void FUN_00429784(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;

  if (*(int *)(param_1 + 0x3e4) < 0) {
    FUN_002fd71c(param_1,0);
  }
  uVar8 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1284) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1288) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x128c) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1290) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1298) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x129c) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x12a0) + 0x6c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x12a4) + 0x6c) = 1;
  if (*(char *)(param_1 + 0x3f4) == '\0') {
    iVar2 = FUN_002f2eec(param_1,0x10000000);
    if ((iVar2 != 0) || (iVar2 = FUN_002f2eec(param_1,0x10), iVar2 != 0)) {
      uVar8 = 1;
    }
    iVar2 = FUN_002f2eec(param_1,0x20000000);
    if ((iVar2 != 0) || (iVar2 = FUN_002f2eec(param_1,0x20), iVar2 != 0)) {
      uVar8 = uVar8 | 2;
    }
    iVar2 = FUN_002f2eec(param_1,0x40000000);
    if ((iVar2 != 0) || (iVar2 = FUN_002f2eec(param_1,0x40), iVar2 != 0)) {
      uVar8 = uVar8 | 4;
    }
    iVar2 = FUN_002f2eec(param_1,0x80000000);
    if ((iVar2 != 0) || (iVar2 = FUN_002f2eec(param_1,0x80), iVar2 != 0)) {
      uVar8 = uVar8 | 8;
    }
    iVar2 = DAT_00429a1c;
    uVar6 = 0;
    iVar7 = DAT_00429a1c + 0x14;
    do {
      if ((uVar8 & 1 << (uVar6 & 0xff)) != 0) {
        for (uVar4 = *(uint *)(iVar7 + *(uint *)(param_1 + 0x3e4) * 0x10 + uVar6 * 4);
            ((*(uint *)(param_1 + 0x3e4) != uVar4 && (-1 < (int)uVar4)) && ((int)uVar4 < 9));
            uVar4 = *(uint *)(iVar7 + uVar4 * 0x10 + uVar6 * 4)) {
          if ((int)uVar4 < 3) {
            uVar1 = 0x40000 << (uVar4 & 0xff);
joined_r0x00429944:
            if ((*(uint *)(DAT_00429a20 + 0xbc) & uVar1) != 0) break;
          }
          else {
            if ((int)uVar4 < 8) {
              uVar1 = 1 << (*(uint *)(iVar2 + uVar4 * 4 + -0xc) & 0xff);
              goto joined_r0x00429944;
            }
            iVar3 = 0;
            while( true ) {
              iVar5 = param_1 + iVar3 * 4;
              bVar9 = *(int *)(iVar5 + 0x1c) == 0;
              if (!bVar9) {
                iVar5 = *(int *)(iVar5 + 0x20);
              }
              if (bVar9 || iVar5 == 0) break;
              iVar3 = iVar3 + 2;
              if (7 < iVar3) goto LAB_00429984;
            }
          }
        }
LAB_00429984:
        if (uVar4 < 9) {
          FUN_002fd71c(param_1,uVar4,1);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
    if (uVar8 == 0) {
      uVar8 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
      if ((~uVar8 & 1) == 0) {
        FUN_002f2e44(param_1 + *(int *)(param_1 + 0x3e4) * 0x1c + 0x1758);
        return;
      }
      if ((~uVar8 & 2) == 0) {
        FUN_002fd71c(param_1,9,0);
        FUN_002f2e44(param_1 + 0x1854);
        return;
      }
    }
  }
  return;
}
