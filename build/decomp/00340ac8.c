// OoT3D decomp @ 00340ac8  name=FUN_00340ac8  size=100

void FUN_00340ac8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 float *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;

  *(undefined4 *)(DAT_00340b2c + param_2) = param_3;
  if (param_4 != (undefined4 *)0x0) {
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    *(undefined4 *)(param_2 + 0x2a20) = *param_4;
    *(undefined4 *)(param_2 + 0x2a24) = uVar1;
    *(undefined4 *)(param_2 + 0x2a28) = uVar2;
  }
  if (param_5 != (float *)0x0) {
    fVar3 = param_5[2];
    *(float *)(param_2 + 0x2a38) = *param_5 - *(float *)(param_2 + 0x2a20);
    uVar1 = DAT_00340b30;
    *(float *)(param_2 + 0x2a40) = fVar3 - *(float *)(param_2 + 0x2a28);
    *(undefined4 *)(param_2 + 0x2a3c) = uVar1;
  }
  *(undefined4 *)(param_2 + 0x2a44) = param_1;
  return;
}
