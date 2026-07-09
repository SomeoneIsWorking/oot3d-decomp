// OoT3D decomp @ 002deb7c  name=FUN_002deb7c  size=356

void FUN_002deb7c(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = piRam002dece0;
  iVar6 = 0;
  if (0 < param_1) {
    do {
      if ((code *)*puRam002dece4 == (code *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)(*(code *)*puRam002dece4)(0x10000,0x100,0,0x10);
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar5 = piVar2[1];
      iVar7 = *piVar2;
      while( true ) {
        iVar4 = iVar7 + (uVar5 & 0x1ff) * 4;
        iVar8 = *(int *)(iVar4 + 0x10);
        if (iVar8 == 0) break;
        if (*(uint *)(iVar8 + 8) != uVar5) {
          if (uVar5 < *(uint *)(iVar8 + 8)) {
            *(uint *)(param_2 + iVar6 * 4) = uVar5;
            puVar3[2] = uVar5;
            puVar3[3] = *(undefined4 *)(iVar7 + (uVar5 & 0x1ff) * 4 + 0x10);
            goto LAB_002dec40;
          }
          bVar1 = false;
          iVar4 = *(int *)(iVar8 + 0xc);
          iVar9 = iVar8;
          if (*(int *)(iVar8 + 0xc) != 0) {
            do {
              iVar8 = iVar4;
              if (*(uint *)(iVar8 + 8) == uVar5) {
                bVar1 = true;
                iVar4 = iVar8;
                iVar8 = iVar9;
                break;
              }
              if (uVar5 < *(uint *)(iVar8 + 8)) {
                *(uint *)(param_2 + iVar6 * 4) = uVar5;
                puVar3[2] = uVar5;
                *(undefined4 **)(iVar9 + 0xc) = puVar3;
                puVar3[3] = iVar8;
                goto LAB_002decc0;
              }
              iVar4 = *(int *)(iVar8 + 0xc);
              iVar9 = iVar8;
            } while (iVar4 != 0);
            if (bVar1) goto LAB_002decd8;
            if (iVar4 != 0) {
              puVar3 = (undefined4 *)FUN_00302bb8();
              uVar5 = extraout_r3;
            }
          }
          *(undefined4 **)(iVar8 + 0xc) = puVar3;
          puVar3[2] = uVar5;
          puVar3[3] = 0;
          *(uint *)(param_2 + iVar6 * 4) = uVar5;
          goto LAB_002decc0;
        }
LAB_002decd8:
        uVar5 = uVar5 + 1;
      }
      *(uint *)(param_2 + iVar6 * 4) = uVar5;
      puVar3[2] = uVar5;
      iVar4 = iVar7 + (uVar5 & 0x1ff) * 4;
      puVar3[3] = 0;
LAB_002dec40:
      *(undefined4 **)(iVar4 + 0x10) = puVar3;
LAB_002decc0:
      iVar6 = iVar6 + 1;
      piVar2[1] = uVar5 + 1;
    } while (iVar6 < param_1);
  }
  return;
}

