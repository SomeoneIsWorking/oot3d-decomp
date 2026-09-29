// OoT3D decomp @ 0020d318  name=FUN_0020d318  size=172

void FUN_0020d318(undefined4 param_1,int param_2,short *param_3,undefined2 param_4,
                 undefined2 param_5,ushort param_6,undefined2 param_7,int param_8)

{
  undefined4 uVar1;
  uint in_fpscr;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  undefined2 local_16;

  local_28 = VectorSignedToFloat((int)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_24 = VectorSignedToFloat((int)param_3[1],(byte)(in_fpscr >> 0x15) & 3);
  local_18 = param_6 | 0x8000;
  local_20 = VectorSignedToFloat((int)param_3[2],(byte)(in_fpscr >> 0x15) & 3);
  local_1a = param_5;
  local_16 = param_7;
  local_2c = param_2;
  local_1c = param_4;
  if ((param_2 != 0 && param_8 != 0) &&
     ((uVar1 = DAT_0020d3c4, param_8 == 1 || (uVar1 = DAT_0020d3c8, param_8 == 2)))) {
    FUN_00375bcc(param_2,uVar1);
  }
  FUN_00342c10(param_1,0x1d,0x80,&local_2c);
  return;
}
