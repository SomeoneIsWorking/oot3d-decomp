// OoT3D decomp @ 00353190  name=FUN_00353190  size=132

void FUN_00353190(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;

  *(float *)(param_3 + 0x38) = -*(float *)(param_3 + 0x40);
  piVar1 = (int *)0x0;
  if (*(int *)(param_3 + 8) != 0) {
    piVar1 = (int *)FUN_0034807c(*(int *)(param_3 + 8),param_4);
  }
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(*piVar1 + *(int *)(*piVar1 + 0x14) + 0x10) + -1;
  }
  uVar3 = VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_3 + 0x3c) = uVar3;
  *(undefined4 *)(param_3 + 0x44) = param_1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  *(undefined4 *)(param_3 + 0x34) = param_4;
  FUN_0030fa1c(param_3,param_4);
  return;
}
