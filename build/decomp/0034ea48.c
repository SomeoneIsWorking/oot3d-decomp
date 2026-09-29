// OoT3D decomp @ 0034ea48  name=FUN_0034ea48  size=36

void FUN_0034ea48(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x260) = *param_2;
  *(undefined4 *)(param_1 + 0x264) = uVar1;
  *(undefined4 *)(param_1 + 0x268) = uVar2;
  *(undefined4 *)(param_1 + 0x26c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x270) = param_2[4];
  *(undefined4 *)(param_1 + 0x274) = uVar1;
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  return;
}
