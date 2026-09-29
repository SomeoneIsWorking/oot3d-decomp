// OoT3D decomp @ 00409428  name=FUN_00409428  size=124

void FUN_00409428(undefined4 *param_1,byte *param_2,byte *param_3)

{
  uint local_10;
  undefined4 uStack_c;

  uStack_c = *(undefined4 *)(DAT_004094a4 + 4);
  local_10 = (uint)param_2[3] << 0xb | (uint)param_3[3] << 0xf |
             (uint)*param_2 << 8 | (uint)*param_3 << 0xc |
             (uint)param_2[1] << 9 | (uint)param_3[1] << 0xd |
             (uint)param_2[2] << 10 | (uint)param_3[2] << 0xe;
  FUN_00307af4(*param_1,&local_10,8);
  return;
}
