// OoT3D decomp @ 00311c70  name=FUN_00311c70  size=256

void FUN_00311c70(uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;

  iVar2 = DAT_00311d70;
  iVar6 = DAT_00311d70 + (param_1 & 0x1f) * 4;
  puVar3 = *(uint **)(iVar6 + 0xa4);
  if (puVar3 != (uint *)0x0) {
    do {
      uVar4 = *puVar3;
      if (uVar4 != param_1) {
        puVar3 = (uint *)puVar3[6];
      }
    } while (uVar4 != param_1 && puVar3 != (uint *)0x0);
  }
  if ((param_1 != 0) && (puVar3 == (uint *)0x0)) {
    if ((code *)*DAT_00311d74 == (code *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)(*(code *)*DAT_00311d74)(0x10000,0x100,0,0x1c);
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = param_1;
    puVar5 = *(uint **)(iVar6 + 0xa4);
    if (puVar5 == (uint *)0x0) {
      *(uint **)(iVar6 + 0xa4) = puVar3;
    }
    else if (param_1 < *puVar5) {
      puVar3[6] = (uint)puVar5;
      *(uint **)(iVar6 + 0xa4) = puVar3;
    }
    else {
      for (puVar1 = (uint *)puVar5[6]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
        if (param_1 < *puVar1) {
          puVar5[6] = (uint)puVar3;
          puVar3[6] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_00311d60;
          break;
        }
        puVar5 = puVar1;
      }
      puVar5[6] = (uint)puVar3;
    }
  }
LAB_00311d60:
  *(uint **)(iVar2 + *(int *)(iVar2 + 0x124) * 4 + 0x128) = puVar3;
  return;
}
