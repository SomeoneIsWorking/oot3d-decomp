// OoT3D decomp @ 00308ab4  name=FUN_00308ab4  size=188

uint FUN_00308ab4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar3 = param_2 + 3U & 0xfffffffc;
  if (param_3 < 0) {
    uVar3 = *(int *)(param_1 + 0x2c) - uVar3 & ~(0xffffffffU - param_3);
    if (*(uint *)(param_1 + 0x28) <= uVar3) {
      FUN_002c30f8(param_1,uVar3,*(int *)(param_1 + 0x2c) - uVar3);
      *(uint *)(param_1 + 0x2c) = uVar3;
      return uVar3;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    uVar2 = (iVar1 + param_3) - 1U & ~(param_3 - 1U);
    uVar3 = uVar3 + uVar2;
    if (uVar3 <= *(uint *)(param_1 + 0x2c)) {
      FUN_002c30f8(param_1,iVar1,uVar3 - iVar1);
      *(uint *)(param_1 + 0x28) = uVar3;
      return uVar2;
    }
  }
  return 0;
}
