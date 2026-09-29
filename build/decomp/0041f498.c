// OoT3D decomp @ 0041f498  name=FUN_0041f498  size=316

uint FUN_0041f498(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((code *)*DAT_0041f5d4 == (code *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)*DAT_0041f5d4)(0x10000,0x100,0,0x1c);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  iVar2 = DAT_0041f5d8;
  puVar3[3] = param_1;
  uVar5 = *(uint *)(iVar2 + 4);
  iVar6 = *(int *)(iVar2 + 8);
  do {
    iVar4 = iVar6 + (uVar5 & 0x1ff) * 4;
    iVar7 = *(int *)(iVar4 + 0x808);
    if (iVar7 == 0) {
      puVar3[2] = uVar5;
      puVar3[6] = 0;
      iVar4 = iVar6 + (uVar5 & 0x1ff) * 4;
LAB_0041f550:
      *(undefined4 **)(iVar4 + 0x808) = puVar3;
LAB_0041f5bc:
      *(uint *)(iVar2 + 4) = uVar5 + 1;
      return uVar5;
    }
    if (*(uint *)(iVar7 + 8) != uVar5) {
      if (*(uint *)(iVar7 + 8) <= uVar5) {
        bVar1 = false;
        iVar4 = *(int *)(iVar7 + 0x18);
        iVar8 = iVar7;
        if (*(int *)(iVar7 + 0x18) != 0) {
          do {
            iVar7 = iVar4;
            if (*(uint *)(iVar7 + 8) == uVar5) {
              bVar1 = true;
              iVar4 = iVar7;
              iVar7 = iVar8;
              break;
            }
            if (uVar5 <= *(uint *)(iVar7 + 8)) {
              puVar3[2] = uVar5;
              *(undefined4 **)(iVar8 + 0x18) = puVar3;
              puVar3[6] = iVar7;
              goto LAB_0041f5bc;
            }
            iVar4 = *(int *)(iVar7 + 0x18);
            iVar8 = iVar7;
          } while (iVar4 != 0);
          if (bVar1 || iVar4 != 0) goto LAB_0041f5cc;
        }
        *(undefined4 **)(iVar7 + 0x18) = puVar3;
        puVar3[2] = uVar5;
        puVar3[6] = 0;
        goto LAB_0041f5bc;
      }
      puVar3[2] = uVar5;
      puVar3[6] = *(undefined4 *)(iVar6 + (uVar5 & 0x1ff) * 4 + 0x808);
      goto LAB_0041f550;
    }
LAB_0041f5cc:
    uVar5 = uVar5 + 1;
  } while( true );
}
