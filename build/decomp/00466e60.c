// OoT3D decomp @ 00466e60  name=FUN_00466e60  size=36

void FUN_00466e60(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 in_r12;

  while( true ) {
    param_2[1] = param_4;
    param_4 = param_1[1];
    param_3 = param_3 + -1;
    param_2 = param_2 + 2;
    *param_2 = in_r12;
    if (param_3 == 0) break;
    param_1 = param_1 + 2;
    in_r12 = *param_1;
  }
  func_0x002f9c88(*(undefined4 *)(unaff_r4 + 0x10));
  return;
}
