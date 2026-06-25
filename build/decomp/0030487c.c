// OoT3D decomp @ 0030487c  name=FUN_0030487c  size=88

void FUN_0030487c(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 0x20);
  uVar3 = *(undefined4 *)(iVar1 + 0x24);
  *param_2 = *(undefined4 *)(iVar1 + 0x1c);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  *param_3 = *(undefined4 *)(iVar1 + 0x10);
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  *param_4 = *(undefined4 *)(iVar1 + 4);
  param_4[1] = uVar2;
  param_4[2] = uVar3;
  return;
}

