// OoT3D decomp @ 00340de8  name=FUN_00340de8  size=44

void FUN_00340de8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x230) = *param_2;
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x240) = param_2[4];
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  *(undefined4 *)(param_1 + 0x24c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x250) = param_2[8];
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  *(undefined4 *)(param_1 + 600) = uVar2;
  *(undefined4 *)(param_1 + 0x25c) = uVar3;
  return;
}
