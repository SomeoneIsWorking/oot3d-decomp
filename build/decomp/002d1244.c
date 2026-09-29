// OoT3D decomp @ 002d1244  name=FUN_002d1244  size=260

void FUN_002d1244(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;

  piVar1 = DAT_002d1348;
  puVar2 = (undefined4 *)*DAT_002d1348;
  if (puVar2 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < (undefined4 *)DAT_002d1348[1]) {
    uVar7 = 0;
    puVar3 = puVar2;
    if (param_2 != 0) {
      do {
        puVar9 = (undefined4 *)(param_3 + uVar7 * 4);
        uVar5 = param_2 - uVar7;
        puVar10 = puVar9 + 1;
        if (0x80 < uVar5) {
          uVar5 = 0x80;
        }
        *puVar3 = *puVar9;
        uVar8 = uVar5 >> 1;
        puVar3[1] = uVar5 * 0x100000 - 0x100000 | param_1 + uVar7 | 0x800f0000;
        puVar2 = puVar3 + 2;
        puVar4 = puVar2;
        if (uVar8 < 0x80000000) {
          if (uVar8 != 0 && -1 < (int)(uVar8 * 2)) {
            puVar3 = puVar3 + 1;
            iVar6 = (int)(uVar8 * 2) >> 1;
            do {
              iVar6 = iVar6 + -1;
              puVar3[1] = puVar9[1];
              puVar9 = puVar9 + 2;
              puVar3 = puVar3 + 2;
              *puVar3 = *puVar9;
            } while (iVar6 != 0);
            puVar2 = puVar2 + uVar8 * 2;
          }
        }
        else {
          do {
            puVar2 = puVar4 + 2;
            *puVar4 = *puVar10;
            puVar3 = puVar10 + 1;
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 2;
            puVar4[1] = *puVar3;
            puVar4 = puVar2;
          } while (uVar8 != 0);
        }
        uVar7 = uVar7 + 0x80;
        puVar3 = puVar2;
      } while (uVar7 < param_2);
    }
    *piVar1 = (int)puVar2;
    return;
  }
  *DAT_002d1348 = DAT_002d1348[1];
  return;
}
