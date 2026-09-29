// OoT3D decomp @ 00303490  name=FUN_00303490  size=12

void FUN_00303490(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;

  *param_1 = 0x42;
  iVar1 = *DAT_00303678;
  if ((*(uint *)(iVar1 + 8) & 0x200) != 0) {
    *(bool *)(iVar1 + 0x71c) = *(int *)(iVar1 + 0x50c) != 0;
  }
  *(undefined1 *)(iVar1 + 0x66c) = 0;
  if (*(int *)(iVar1 + 0x508) == 0) {
    FUN_002d0b28(0xc);
  }
  else if (*(int *)(*DAT_0030367c + 0x80c) == 0) {
    *(undefined1 *)(iVar1 + 0x66c) = 1;
    FUN_002d0b28(0xc);
  }
  else {
    puVar5 = *(undefined4 **)(*(int *)(*DAT_0030367c + 0x80c) + 8);
    uVar2 = FUN_002c83f8(*puVar5);
    *(undefined4 *)(iVar1 + 0x5d0) = uVar2;
    *(undefined4 *)(iVar1 + 0x608) = puVar5[2];
  }
  iVar6 = 0;
  do {
    iVar3 = iVar1 + 1000 + iVar6 * 0x18;
    if (*(char *)(iVar3 + 0x15) == '\0') {
      iVar3 = iVar1 + iVar6 * 4;
      *(int *)(iVar3 + 0x60c) = iVar1 + 0x298 + iVar6 * 0x10;
      *(undefined4 *)(iVar3 + 0x63c) = 0;
    }
    else if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_002d0b28(iVar6);
    }
    else {
      iVar3 = *(int *)(*DAT_0030367c + iVar6 * 4 + 0x810);
      if (iVar3 == 0) {
        *(undefined1 *)(iVar1 + 0x66c) = 1;
        FUN_002d0b28(iVar6);
      }
      else {
        piVar7 = *(int **)(iVar3 + 8);
        iVar3 = *DAT_00303678;
        puVar5 = (undefined4 *)(iVar3 + 0x5d0);
        if (iVar6 == 0xc) {
          uVar2 = FUN_002c83f8(*piVar7);
          *puVar5 = uVar2;
          *(int *)(iVar3 + 0x608) = piVar7[2];
        }
        else {
          piVar8 = (int *)(iVar3 + 1000 + iVar6 * 0x18);
          uVar2 = FUN_002c83f8(*piVar8 + *piVar7);
          puVar5[iVar6 + 1] = uVar2;
          puVar5[iVar6 + 0xf] = piVar7[2] + *piVar8;
          iVar3 = piVar8[2];
          bVar9 = iVar3 == 0x1400;
          if (!bVar9) {
            iVar3 = iVar3 + -0x1401;
            bVar9 = iVar3 == 0;
          }
          if (bVar9) {
            iVar3 = 1;
          }
          else if (iVar3 == 1) {
            iVar3 = 2;
          }
          else if (iVar3 == 5) {
            iVar3 = 4;
          }
          else {
            iVar3 = 0;
          }
          iVar4 = piVar8[3];
          if (iVar4 == 0) {
            iVar4 = piVar8[1] * iVar3;
          }
          puVar5[iVar6 + 0x1b] = iVar4;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xc);
  return;
}
