// OoT3D decomp @ 002c1678  name=FUN_002c1678  size=344

void FUN_002c1678(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;

  piVar2 = DAT_002c17d0;
  iVar6 = 0;
  if (0 < param_1) {
    do {
      if ((code *)*DAT_002c17d4 == (code *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)(*(code *)*DAT_002c17d4)(0x10000,0x100,0,0x10);
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar5 = piVar2[1];
      iVar7 = *piVar2;
      while (puVar8 = *(uint **)(iVar7 + (uVar5 & 0x1ff) * 4), puVar8 != (uint *)0x0) {
        if (*puVar8 != uVar5) {
          if (uVar5 < *puVar8) {
            *(uint *)(param_2 + iVar6 * 4) = uVar5;
            *puVar3 = uVar5;
            puVar3[3] = *(uint *)(iVar7 + (uVar5 & 0x1ff) * 4);
            goto LAB_002c1730;
          }
          bVar1 = false;
          puVar4 = (uint *)puVar8[3];
          puVar9 = puVar8;
          if ((uint *)puVar8[3] != (uint *)0x0) {
            do {
              puVar8 = puVar4;
              if (*puVar8 == uVar5) {
                bVar1 = true;
                puVar4 = puVar8;
                puVar8 = puVar9;
                break;
              }
              if (uVar5 < *puVar8) {
                *(uint *)(param_2 + iVar6 * 4) = uVar5;
                *puVar3 = uVar5;
                puVar9[3] = (uint)puVar3;
                puVar3[3] = (uint)puVar8;
                goto LAB_002c17b0;
              }
              puVar4 = (uint *)puVar8[3];
              puVar9 = puVar8;
            } while (puVar4 != (uint *)0x0);
            if (bVar1) goto LAB_002c17c8;
            if (puVar4 != (uint *)0x0) {
              puVar3 = (uint *)FUN_00302bb8();
              uVar5 = extraout_r3;
            }
          }
          puVar8[3] = (uint)puVar3;
          *puVar3 = uVar5;
          puVar3[3] = 0;
          *(uint *)(param_2 + iVar6 * 4) = uVar5;
          goto LAB_002c17b0;
        }
LAB_002c17c8:
        uVar5 = uVar5 + 1;
      }
      *(uint *)(param_2 + iVar6 * 4) = uVar5;
      *puVar3 = uVar5;
      puVar3[3] = 0;
LAB_002c1730:
      *(uint **)(iVar7 + (uVar5 & 0x1ff) * 4) = puVar3;
LAB_002c17b0:
      iVar6 = iVar6 + 1;
      piVar2[1] = uVar5 + 1;
    } while (iVar6 < param_1);
  }
  return;
}
