// OoT3D decomp @ 00310984  name=FUN_00310984  size=320

void FUN_00310984(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  puVar7 = puRam00310ac8;
  piVar6 = *(int **)(*(int *)(iRam00310ac4 + 8) + (param_1 & 0x1ff) * 4 + 8);
  if (piVar6 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar6 + 1);
      if (*puVar1 != param_1) {
        piVar6 = (int *)*piVar6;
      }
    } while (*puVar1 != param_1 && piVar6 != (int *)0x0);
  }
  if ((code *)*puRam00310ac8 == (code *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)*puRam00310ac8)(0x10000,0x100,0,0xc);
  }
  iVar4 = FUN_0030de24(param_3);
  if ((code *)*puVar7 == (code *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)*puVar7)(0x10000,0x100,0,iVar4 + 1);
  }
  *puVar3 = uVar5;
  puVar7 = (undefined4 *)piVar6[6];
  do {
    if (puVar7 == (undefined4 *)0x0) {
code_r0x00310aa4:
      FUN_0010007c(*puVar3,param_3);
      puVar3[1] = param_2;
      puVar3[2] = piVar6[6];
      piVar6[6] = (int)puVar3;
      return;
    }
    iVar4 = FUN_00303414(*puVar7,param_3);
    puVar2 = puRam00310acc;
    if (iVar4 == 0) {
      if ((code *)*puRam00310acc != (code *)0x0) {
        (*(code *)*puRam00310acc)(0x10000,0x100,0,*puVar3);
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(0x10000,0x100,0,puVar3);
        }
      }
      puVar7[1] = param_2;
      if (puVar7 != (undefined4 *)0x0) {
        return;
      }
      goto code_r0x00310aa4;
    }
    puVar7 = (undefined4 *)puVar7[2];
  } while( true );
}

