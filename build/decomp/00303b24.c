// OoT3D decomp @ 00303b24  name=FUN_00303b24  size=432

void FUN_00303b24(uint param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  puVar6 = (undefined4 *)*DAT_00303cd4;
  if (puVar6 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < (undefined4 *)DAT_00303cd4[1]) {
    uVar8 = 0;
    if (param_2 != 0) {
      do {
        puVar1 = (undefined4 *)(param_3 + uVar8 * 4);
        puVar7 = puVar1 + 1;
        uVar2 = param_2 - uVar8;
        *puVar6 = *puVar1;
        if (0x80 < uVar2) {
          uVar2 = 0x80;
        }
        uVar11 = uVar2 & 0xfffffffe;
        puVar6[1] = DAT_00303cd8 + uVar2 * 0x100000 | param_1 | 0xf0000;
        puVar1 = puVar6;
        while (puVar6 = puVar1 + 2, (uVar2 & 0xe) != 0) {
          puVar4 = puVar7 + 1;
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 2;
          puVar1[3] = *puVar4;
          uVar11 = uVar11 - 2;
          puVar1 = puVar6;
          uVar2 = uVar11;
        }
        if (uVar11 < 0x80000000) {
          iVar9 = 0;
          iVar3 = (int)((-0xf - uVar11) + ((uint)((int)(-0xf - uVar11) >> 0x1f) >> 0x1c)) >> 4;
          for (iVar10 = 0; -iVar10 != iVar3 && iVar10 <= -iVar3; iVar10 = iVar10 + 1) {
            puVar1 = puVar7 + iVar9 + -1;
            puVar4 = puVar6 + iVar9 + -1;
            iVar5 = 8;
            do {
              iVar5 = iVar5 + -1;
              puVar4[1] = puVar1[1];
              puVar1 = puVar1 + 2;
              puVar4 = puVar4 + 2;
              *puVar4 = *puVar1;
            } while (iVar5 != 0);
            iVar9 = iVar9 + 0x10;
          }
          puVar6 = puVar6 + iVar3 * -0x10;
        }
        else {
          do {
            uVar11 = uVar11 - 0x10;
            iVar3 = (int)puVar6 - (int)puVar7 >> 2;
            bVar12 = iVar3 == 0;
            iVar9 = iVar3;
            if (0 < iVar3) {
              iVar9 = 0x10 - iVar3;
              bVar12 = iVar3 == 0x10;
            }
            if (bVar12 || iVar9 < 0 != (0 < iVar3 && SBORROW4(0x10,iVar3))) {
              FUN_00483a1c(puVar6,puVar7,0x40);
              puVar7 = puVar7 + 0x10;
              puVar6 = puVar6 + 0x10;
            }
            else {
              iVar3 = 0;
              puVar1 = puVar6;
              do {
                puVar6 = puVar1 + 2;
                *puVar1 = *puVar7;
                puVar4 = puVar7 + 1;
                iVar3 = iVar3 + 2;
                puVar7 = puVar7 + 2;
                puVar1[1] = *puVar4;
                puVar1 = puVar6;
              } while (iVar3 < 0x10);
            }
          } while (uVar11 != 0);
        }
        uVar8 = uVar8 + 0x80;
      } while (uVar8 < param_2);
    }
    *DAT_00303cd4 = (uint)puVar6;
  }
  else {
    *DAT_00303cd4 = DAT_00303cd4[1];
  }
  return;
}
