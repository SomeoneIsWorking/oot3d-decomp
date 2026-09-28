// OoT3D decomp @ 003fefec  name=FUN_003fefec  size=308

undefined4 * FUN_003fefec(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;

  *param_1 = uRam003ff120;
  if (param_1[1] != 0) {
    uVar1 = func_0x0040cbb8();
    (**(code **)(*(int *)*puRam003ff124 + 0x10))((int *)*puRam003ff124,uVar1);
  }
  if (param_1[2] != 0) {
    (**(code **)(*(int *)*puRam003ff128 + 0x10))((int *)*puRam003ff128,param_1[2]);
  }
  if (param_1[3] != 0) {
    uVar1 = func_0x003685a0();
    (**(code **)(*(int *)*puRam003ff12c + 0x10))((int *)*puRam003ff12c,uVar1);
  }
  if (param_1[4] != 0) {
    uVar1 = func_0x003fcfac();
    (**(code **)(*(int *)*puRam003ff130 + 0x10))((int *)*puRam003ff130,uVar1);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    *(char *)(iVar2 + 0x1b9) = *(char *)(iVar2 + 0x1b9) + -1;
    if (param_1[7] != 0) {
      (**(code **)(*(int *)*puRam003ff134 + 0x10))((int *)*puRam003ff134,param_1[7]);
    }
  }
  return param_1;
}
