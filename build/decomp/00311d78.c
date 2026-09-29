// OoT3D decomp @ 00311d78  name=FUN_00311d78  size=352

void FUN_00311d78(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint extraout_r3;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *extraout_r12;

  puVar3 = DAT_00311edc;
  iVar2 = DAT_00311ed8;
  iVar8 = 0;
  if (0 < param_1) {
    do {
      if ((code *)*puVar3 == (code *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)(*(code *)*puVar3)(0x10000,0x100,0,0x1c);
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      uVar7 = puVar3[3];
      while( true ) {
        iVar5 = iVar2 + (uVar7 & 0x1f) * 4;
        puVar9 = *(uint **)(iVar5 + 0xa4);
        if (puVar9 == (uint *)0x0) break;
        if (*puVar9 != uVar7) {
          if (uVar7 < *puVar9) {
            *(uint *)(param_2 + iVar8 * 4) = uVar7;
            *puVar4 = uVar7;
            puVar4[6] = *(uint *)(iVar2 + (uVar7 & 0x1f) * 4 + 0xa4);
            goto LAB_00311e38;
          }
          bVar1 = false;
          puVar6 = (uint *)puVar9[6];
          puVar10 = puVar9;
          if ((uint *)puVar9[6] != (uint *)0x0) {
            do {
              puVar9 = puVar6;
              if (*puVar9 == uVar7) {
                bVar1 = true;
                puVar6 = puVar9;
                puVar9 = puVar10;
                break;
              }
              if (uVar7 < *puVar9) {
                *(uint *)(param_2 + iVar8 * 4) = uVar7;
                *puVar4 = uVar7;
                puVar10[6] = (uint)puVar4;
                puVar4[6] = (uint)puVar9;
                goto LAB_00311eb8;
              }
              puVar6 = (uint *)puVar9[6];
              puVar10 = puVar9;
            } while (puVar6 != (uint *)0x0);
            if (bVar1) goto LAB_00311ed0;
            if (puVar6 != (uint *)0x0) {
              puVar4 = (uint *)FUN_00302bb8();
              uVar7 = extraout_r3;
              puVar9 = extraout_r12;
            }
          }
          puVar9[6] = (uint)puVar4;
          *puVar4 = uVar7;
          puVar4[6] = 0;
          *(uint *)(param_2 + iVar8 * 4) = uVar7;
          goto LAB_00311eb8;
        }
LAB_00311ed0:
        uVar7 = uVar7 + 1;
      }
      *(uint *)(param_2 + iVar8 * 4) = uVar7;
      *puVar4 = uVar7;
      iVar5 = iVar2 + (uVar7 & 0x1f) * 4;
      puVar4[6] = 0;
LAB_00311e38:
      *(uint **)(iVar5 + 0xa4) = puVar4;
LAB_00311eb8:
      iVar8 = iVar8 + 1;
      puVar3[3] = uVar7 + 1;
    } while (iVar8 < param_1);
  }
  return;
}
