// OoT3D decomp @ 00323d90  name=FUN_00323d90  size=352

void FUN_00323d90(undefined4 param_1,float *param_2,undefined4 param_3,int param_4)

{
  uint in_fpscr;
  undefined1 auStack_70 [2];
  short local_6e;
  short local_6c;
  short local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 auStack_24 [4];

  FUN_00371738(auStack_70,DAT_00323ef0,0x4c);
  if (param_4 == 0) {
    local_68 = *DAT_00323ef4;
    local_64 = DAT_00323ef4[1];
    local_60 = DAT_00323ef4[2];
    local_5c = DAT_00323ef4[3];
    local_58 = DAT_00323ef4[4];
    local_54 = DAT_00323ef4[5];
    local_34 = 0xff;
    local_33 = 0x80;
    local_32 = 0;
  }
  else if (param_4 == 1) {
    local_64 = DAT_00323ef4[7];
    local_60 = DAT_00323ef4[8];
    local_5c = DAT_00323ef4[9];
    local_68 = DAT_00323ef4[6];
    local_58 = DAT_00323ef4[10];
    local_54 = DAT_00323ef4[0xb];
    local_34 = 0;
    local_33 = 0x80;
    local_32 = 0xff;
  }
  local_6e = (short)(int)*param_2;
  local_6c = (short)(int)param_2[1];
  local_6a = (short)(int)param_2[2];
  local_40 = VectorSignedToFloat((int)local_6e,(byte)(in_fpscr >> 0x15) & 3);
  local_3c = VectorSignedToFloat((int)local_6c,(byte)(in_fpscr >> 0x15) & 3);
  local_38 = VectorSignedToFloat((int)local_6a,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00350660(param_1,auStack_24,3,0,1,auStack_70);
  FUN_0037547c(DAT_00323f00,param_3,4,DAT_00323efc,DAT_00323efc,DAT_00323ef8);
  return;
}
