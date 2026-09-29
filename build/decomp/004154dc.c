// OoT3D decomp @ 004154dc  name=FUN_004154dc  size=552

void FUN_004154dc(uint param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;

  puVar3 = DAT_00415708;
  puVar2 = DAT_00415704;
  if (param_1 == 0) {
    return;
  }
  puVar7 = *(undefined4 **)*DAT_00415704;
  if (puVar7 == (undefined4 *)0x0) {
    uVar6 = 0;
    puVar7 = (undefined4 *)0x0;
    if (param_1 != 0) {
      do {
        if ((code *)*puVar3 == (code *)0x0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          puVar1 = (undefined4 *)(*(code *)*puVar3)(0x10000,0x100,0,0x28);
        }
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          *puVar1 = 0;
          puVar1[4] = 0;
        }
        if (puVar7 == (undefined4 *)0x0) {
          *(undefined4 **)*puVar2 = puVar1;
        }
        else {
          puVar7[9] = puVar1;
        }
        iVar5 = uVar6 + 1;
        *(int *)(param_2 + uVar6 * 4) = iVar5;
        uVar6 = uVar6 + 1;
        puVar1[8] = iVar5;
        puVar7 = puVar1;
      } while (uVar6 < param_1);
    }
  }
  else {
    iVar5 = 0;
    uVar6 = 1;
    puVar2 = (undefined4 *)puVar7[9];
    while (puVar3 = puVar2, puVar2 = DAT_00415708, puVar3 != (undefined4 *)0x0) {
      if (param_1 == 0) {
        return;
      }
      if (uVar6 < (uint)puVar3[8]) {
        uVar4 = 0;
        for (; (uVar4 < puVar3[8] - uVar6 && (param_1 != 0)); param_1 = param_1 - 1) {
          if ((code *)*DAT_00415708 == (code *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)(*(code *)*DAT_00415708)(0x10000,0x100,0,0x28);
          }
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[8] = 0;
            puVar2[9] = 0;
            *puVar2 = 0;
            puVar2[4] = 0;
          }
          puVar2[8] = uVar4 + uVar6;
          *(uint *)(param_2 + iVar5 * 4) = uVar4 + uVar6;
          puVar7[9] = puVar2;
          iVar5 = iVar5 + 1;
          uVar4 = uVar4 + 1;
          puVar2[9] = puVar3;
          puVar7 = puVar2;
        }
        uVar6 = puVar3[8];
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar3;
      puVar2 = (undefined4 *)puVar3[9];
    }
    if (param_1 != 0) {
      uVar4 = 0;
      do {
        if ((code *)*puVar2 == (code *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)(*(code *)*puVar2)(0x10000,0x100,0,0x28);
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
        puVar7[9] = puVar3;
        puVar3[8] = uVar6;
        *(uint *)(param_2 + iVar5 * 4) = uVar6;
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 1;
        puVar7 = puVar3;
      } while (uVar4 < param_1);
      puVar3[9] = 0;
      return;
    }
  }
  return;
}
