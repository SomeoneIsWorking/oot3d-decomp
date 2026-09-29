// OoT3D decomp @ 00347d24  name=FUN_00347d24  size=172

void FUN_00347d24(undefined4 param_1,undefined4 param_2,int param_3,short *param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  uint in_fpscr;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined2 local_20;

  local_54 = VectorSignedToFloat((int)*param_4,(byte)(in_fpscr >> 0x15) & 3);
  local_50 = VectorSignedToFloat((int)param_4[1],(byte)(in_fpscr >> 0x15) & 3);
  local_4c = VectorSignedToFloat((int)param_4[2],(byte)(in_fpscr >> 0x15) & 3);
  local_2b = param_6;
  local_2a = param_7;
  local_28 = param_9;
  local_27 = param_10;
  local_29 = param_8;
  local_26 = param_11;
  local_20 = 0;
  local_58 = param_3;
  local_48 = param_1;
  local_2c = param_5;
  if (param_3 != 0) {
    FUN_00375bcc(param_3,DAT_00347dd0);
  }
  FUN_00342c10(param_2,0x1b,0x50,&local_58);
  return;
}
