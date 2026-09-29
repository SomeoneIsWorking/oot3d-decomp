// OoT3D decomp @ 003476d8  name=FUN_003476d8  size=132

void FUN_003476d8(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  uint in_fpscr;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  piVar1 = (int *)FUN_0034807c(*(undefined4 *)(param_2 + 0x24e0),param_4);
  if (param_1 == -0x40800000) {
    param_1 = VectorSignedToFloat(*(undefined4 *)(*piVar1 + *(int *)(*piVar1 + 0x14) + 0x10),
                                  (byte)(in_fpscr >> 0x15) & 3);
  }
  FUN_00347550(param_1,piVar1,1,&local_34,3);
  *param_3 = local_34;
  param_3[1] = local_30;
  param_3[2] = local_2c;
  return;
}
