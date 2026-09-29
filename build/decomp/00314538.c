// OoT3D decomp @ 00314538  name=FUN_00314538  size=100

void FUN_00314538(undefined4 *param_1,undefined4 *param_2)

{
  uint in_fpscr;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x15) & 3);
  local_10 = VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  local_c = VectorSignedToFloat(param_2[2],(byte)(in_fpscr >> 0x15) & 3);
  local_8 = VectorSignedToFloat(param_2[3],(byte)(in_fpscr >> 0x15) & 3);
  FUN_00307c94(*param_1,0x59,1,&local_14);
  return;
}
