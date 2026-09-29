// OoT3D decomp @ 00308d4c  name=FUN_00308d4c  size=216

int FUN_00308d4c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;

  iVar2 = param_1;
  uVar6 = param_2;
  uVar7 = param_3;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    iVar3 = iVar1 + -0x58;
    if ((int)param_3 < *(int *)(iVar1 + -0x18)) {
      return 0;
    }
    pcVar4 = *(code **)(iVar1 + -0x4c);
    uVar5 = *(undefined4 *)(iVar1 + -0x48);
    iVar1 = *(int *)(iVar1 + -0x50);
    FUN_0030a474(iVar3);
    FUN_0030a40c(iVar3);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar3,2,uVar5);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = iVar1 + -0x58;
  iVar2 = FUN_00494478(iVar3,param_2,param_3,param_4,param_5,iVar2,uVar6,uVar7);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + -0x18) = param_3 & 0xff;
  FUN_0030a4d0(param_1,iVar3);
  return iVar3;
}
