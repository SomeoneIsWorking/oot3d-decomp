// OoT3D decomp @ 002b7d74  name=FUN_002b7d74  size=188

void FUN_002b7d74(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r9;
  int iVar4;

  *(undefined4 *)(param_1 + 4) = param_2;
  if (param_4 <= param_6) {
    unaff_r9 = param_6;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  if (param_6 < param_4) {
    unaff_r9 = param_4;
  }
  *(int *)(param_1 + 0xc) = param_4;
  *(int *)(param_1 + 0x10) = param_5;
  *(int *)(param_1 + 0x14) = param_6;
  *(int *)(param_1 + 0x18) = param_7;
  iVar4 = param_7;
  if (param_7 < param_5) {
    iVar4 = param_5;
  }
  *(int *)(param_1 + 0x1c) = unaff_r9;
  *(int *)(param_1 + 0x20) = iVar4;
  iVar1 = FUN_00368d94(param_2,unaff_r9,param_3,param_4,param_1,param_2,param_3,param_4);
  iVar2 = FUN_00368d94(param_3,iVar4);
  *(int *)(param_1 + 0x3c) = iVar1 * iVar2;
  uVar3 = FUN_00368d94(unaff_r9 * iVar4,param_4 * param_5);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar3 = FUN_00368d94(unaff_r9 * iVar4,param_6 * param_7);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}
