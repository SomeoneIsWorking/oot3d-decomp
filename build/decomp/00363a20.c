// OoT3D decomp @ 00363a20  name=FUN_00363a20  size=108

void FUN_00363a20(undefined4 param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  float fVar1;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00368cc0(param_1,param_2 + 0x3c,&local_18,&local_1c);
  fVar1 = DAT_00363a90;
  *param_3 = (short)(int)(DAT_00363a8c + local_18 * local_1c * DAT_00363a8c);
  *param_4 = (short)(int)(DAT_00363a94 + local_14 * local_1c * fVar1);
  return;
}

