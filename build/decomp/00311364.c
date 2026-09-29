// OoT3D decomp @ 00311364  name=FUN_00311364  size=324

void FUN_00311364(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;

  piVar2 = DAT_003114ac;
  puVar5 = (uint *)*DAT_003114a8;
  if (*(uint *)(((undefined4 *)*DAT_003114ac)[2] + 0x20) != param_2) {
    for (puVar3 = *(undefined4 **)*DAT_003114ac; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[9]) {
      if (param_2 <= (uint)puVar3[8]) {
        if ((puVar3 != (undefined4 *)0x0) && (puVar3[8] == param_2)) goto LAB_00311490;
        break;
      }
    }
    if ((code *)*DAT_003114b0 == (code *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(code *)*DAT_003114b0)(0x10000,0x100,0,0x28);
    }
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *puVar3 = 0;
      puVar3[4] = 0;
    }
    puVar3[8] = param_2;
    puVar3[9] = 0;
    piVar4 = (int *)*piVar2;
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      *piVar4 = (int)puVar3;
    }
    else if (param_2 < *(uint *)(iVar6 + 0x20)) {
      puVar3[9] = iVar6;
      *piVar4 = (int)puVar3;
    }
    else {
      for (iVar1 = *(int *)(iVar6 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
        if (param_2 < *(uint *)(iVar1 + 0x20)) {
          *(undefined4 **)(iVar6 + 0x24) = puVar3;
          puVar3[9] = iVar1;
          if (iVar1 != 0) goto LAB_00311490;
          break;
        }
        iVar6 = iVar1;
      }
      *(undefined4 **)(iVar6 + 0x24) = puVar3;
    }
LAB_00311490:
    *(undefined4 **)(*piVar2 + 8) = puVar3;
    *puVar5 = *puVar5 | 1;
  }
  return;
}
