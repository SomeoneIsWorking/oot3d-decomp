// OoT3D decomp @ 004c3ae4  name=FUN_004c3ae4  size=252

void FUN_004c3ae4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;

  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = DAT_004c3be0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar8 = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(bool *)(param_1 + 0x18) = *(char *)(param_2 + 8) != '\0';
  do {
    iVar3 = iVar6 * 8 + 0xc;
    piVar5 = (int *)(param_2 + iVar3);
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      iVar3 = piVar5[1];
      uVar8 = 0;
    }
    if (iVar2 != 0 && iVar3 != 0) {
      do {
        iVar3 = param_2 + iVar2;
        iVar2 = iVar2 + 8;
        uVar4 = 0;
        if (*(int *)(iVar3 + 4) != 0) {
          do {
            pfVar7 = (float *)(param_2 + iVar2);
            uVar4 = uVar4 + 1;
            iVar2 = iVar2 + 0x10;
            fVar9 = *(float *)(param_1 + 0x14);
            if (*(float *)(param_1 + 0x14) <= *pfVar7) {
              fVar9 = *pfVar7;
            }
            *(float *)(param_1 + 0x14) = fVar9;
          } while (uVar4 < *(uint *)(iVar3 + 4));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)piVar5[1]);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x14);
  return;
}
