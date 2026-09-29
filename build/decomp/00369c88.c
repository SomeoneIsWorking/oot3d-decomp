// OoT3D decomp @ 00369c88  name=FUN_00369c88  size=160

undefined4 FUN_00369c88(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 local_5c;
  undefined4 uStack_58;
  float local_54 [4];
  float fStack_44;
  float local_40;
  float fStack_3c;
  undefined4 local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  fVar1 = DAT_00369d38;
  local_38[0] = *DAT_00369d28;
  local_38[1] = DAT_00369d28[1];
  local_38[2] = DAT_00369d28[2];
  local_38[3] = DAT_00369d28[3];
  uStack_28 = DAT_00369d28[4];
  uStack_24 = DAT_00369d28[5];
  uStack_20 = DAT_00369d28[6];
  local_54[0] = *DAT_00369d2c;
  local_54[1] = DAT_00369d2c[1];
  local_54[2] = DAT_00369d2c[2];
  local_54[3] = DAT_00369d2c[3];
  fStack_44 = DAT_00369d2c[4];
  local_40 = DAT_00369d2c[5];
  fStack_3c = DAT_00369d2c[6];
  local_5c = DAT_00369d30;
  uStack_58 = DAT_00369d34;
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,local_38[param_2]);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(local_54[param_2] * fVar1,DAT_00369d40,uVar2,DAT_00369d3c,param_1 + 0x1a4,
               local_38[param_2],*(undefined1 *)((int)&local_5c + param_2));
  return uVar2;
}
