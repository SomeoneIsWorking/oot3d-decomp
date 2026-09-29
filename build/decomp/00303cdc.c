// OoT3D decomp @ 00303cdc  name=FUN_00303cdc  size=212

void FUN_00303cdc(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  puVar1 = DAT_00303db0;
  puVar2 = (undefined4 *)*DAT_00303db0;
  if (puVar2 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < (undefined4 *)DAT_00303db0[1]) {
    uVar5 = 0;
    puVar3 = puVar2;
    if (param_2 != 0) {
      do {
        uVar6 = param_2 - uVar5;
        if (0x80 < uVar6) {
          uVar6 = 0x80;
        }
        *puVar3 = param_3;
        uVar7 = uVar6 >> 1;
        puVar2 = puVar3 + 2;
        puVar3[1] = param_1 + uVar5 | uVar6 * 0x100000 - 0x100000 | 0x800f0000;
        if (uVar7 < 0x80000000) {
          if (uVar7 != 0 && -1 < (int)(uVar7 * 2)) {
            puVar3 = puVar3 + 1;
            iVar4 = (int)(uVar7 * 2) >> 1;
            do {
              puVar3[1] = param_3;
              iVar4 = iVar4 + -1;
              puVar3 = puVar3 + 2;
              *puVar3 = param_3;
            } while (iVar4 != 0);
            puVar2 = puVar2 + uVar7 * 2;
          }
        }
        else {
          do {
            *puVar2 = param_3;
            puVar2[1] = param_3;
            uVar7 = uVar7 - 1;
            puVar2 = puVar2 + 2;
          } while (uVar7 != 0);
        }
        uVar5 = uVar5 + 0x80;
        puVar3 = puVar2;
      } while (uVar5 < param_2);
    }
    *puVar1 = puVar2;
    return;
  }
  *DAT_00303db0 = (undefined4 *)DAT_00303db0[1];
  return;
}
