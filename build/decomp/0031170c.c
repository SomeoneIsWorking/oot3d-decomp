// OoT3D decomp @ 0031170c  name=FUN_0031170c  size=576

void FUN_0031170c(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  puVar2 = DAT_00311950;
  piVar1 = DAT_0031194c;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(*DAT_0031194c + 4) == 0) {
    uVar6 = 0;
    iVar4 = 0;
    if (param_1 != 0) {
      do {
        if ((code *)*puVar2 == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(code *)*puVar2)(0x10000,0x100,0,0x48);
        }
        if (iVar3 != 0) {
          FUN_00343280(iVar3,0x48);
        }
        if (iVar4 == 0) {
          *(int *)(*piVar1 + 4) = iVar3;
        }
        else {
          *(int *)(iVar4 + 0x44) = iVar3;
        }
        iVar4 = uVar6 + 1;
        param_2[uVar6] = iVar4;
        uVar6 = uVar6 + 1;
        *(int *)(iVar3 + 0x40) = iVar4;
        iVar4 = iVar3;
      } while (uVar6 < param_1);
    }
  }
  else {
    iVar4 = 0;
    uVar6 = 2;
    if (*(int *)(*(int *)(*DAT_0031194c + 4) + 0x40) != 1) {
      if ((code *)*DAT_00311950 == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(code *)*DAT_00311950)(0x10000,0x100,0,0x48);
      }
      if (iVar3 != 0) {
        FUN_00343280(iVar3,0x48);
      }
      *param_2 = 1;
      iVar4 = 1;
      *(undefined4 *)(iVar3 + 0x40) = 1;
      iVar5 = *piVar1;
      param_1 = param_1 - 1;
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar5 + 4) = iVar3;
    }
    iVar3 = *(int *)(*(int *)(*piVar1 + 4) + 0x44);
    iVar5 = *(int *)(*piVar1 + 4);
    while (iVar8 = iVar3, puVar2 = DAT_00311950, iVar8 != 0) {
      if (param_1 == 0) {
        return;
      }
      if (uVar6 < *(uint *)(iVar8 + 0x40)) {
        uVar7 = 0;
        for (; (uVar7 < *(int *)(iVar8 + 0x40) - uVar6 && (param_1 != 0)); param_1 = param_1 - 1) {
          if ((code *)*DAT_00311950 == (code *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (*(code *)*DAT_00311950)(0x10000,0x100,0,0x48);
          }
          if (iVar3 != 0) {
            FUN_00343280(iVar3,0x48);
          }
          *(uint *)(iVar3 + 0x40) = uVar7 + uVar6;
          param_2[iVar4] = uVar7 + uVar6;
          *(int *)(iVar5 + 0x44) = iVar3;
          iVar4 = iVar4 + 1;
          uVar7 = uVar7 + 1;
          *(int *)(iVar3 + 0x44) = iVar8;
          iVar5 = iVar3;
        }
        uVar6 = *(uint *)(iVar8 + 0x40);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar8;
      iVar3 = *(int *)(iVar8 + 0x44);
    }
    if (param_1 != 0) {
      uVar7 = 0;
      do {
        if ((code *)*puVar2 == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(code *)*puVar2)(0x10000,0x100,0,0x48);
        }
        if (iVar3 != 0) {
          FUN_00343280(iVar3,0x48);
        }
        *(int *)(iVar5 + 0x44) = iVar3;
        *(uint *)(iVar3 + 0x40) = uVar6;
        param_2[iVar4] = uVar6;
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar3;
      } while (uVar7 < param_1);
      *(undefined4 *)(iVar3 + 0x44) = 0;
      return;
    }
  }
  return;
}
