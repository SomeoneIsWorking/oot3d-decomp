// OoT3D decomp @ 003693b4  name=FUN_003693b4  size=280

void FUN_003693b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5,undefined4 param_6)

{
  uint in_fpscr;
  float fVar1;
  undefined8 uVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = DAT_003694cc / fVar1;
  uVar2 = FUN_00368d94(param_6);
  local_28 = (float)VectorSignedToFloat((int)((ulonglong)uVar2 >> 0x20),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_28 = fVar1 * local_28;
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  local_24 = (float)VectorSignedToFloat((int)uVar2,(byte)(in_fpscr >> 0x15) & 3);
  local_24 = (DAT_003694d0 / fVar1) * local_24;
  if (param_5 == (float *)0x0) {
    FUN_00371f1c(*(undefined4 *)(param_1 + 8),param_2,param_3,param_4,0,&local_28);
    return;
  }
  local_38 = *param_5 - *(float *)(param_1 + 0x18);
  local_34 = param_5[1] - *(float *)(param_1 + 0x1c);
  local_30 = param_5[2] - *(float *)(param_1 + 0x20);
  local_2c = param_5[3];
  FUN_00371f1c(*(undefined4 *)(param_1 + 8),param_2,param_3,param_4,&local_38,&local_28);
  return;
}
