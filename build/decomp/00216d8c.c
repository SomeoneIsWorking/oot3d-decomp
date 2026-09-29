// OoT3D decomp @ 00216d8c  name=FUN_00216d8c  size=328

void FUN_00216d8c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;

  local_58 = DAT_00216ff0;
  local_54 = DAT_00216ff0;
  local_50 = DAT_00216ff0;
  local_64 = DAT_00216ff0;
  local_60 = DAT_00216ff0;
  local_5c = DAT_00216ff0;
  if (param_2 == 1) {
    FUN_003735ac(param_4 + 0x62c,param_3,&local_58);
  }
  else if (param_2 == 0xe) {
    FUN_003735ac(param_4 + 0x3c,param_3,&local_58);
  }
  else if ((((((((param_2 == 0x12 || param_2 == 0x10) || param_2 == 5) || param_2 == 6) ||
              param_2 == 2) || param_2 == 3) || param_2 == 9) ||
           (((param_2 == 10 || param_2 == 0xb) || param_2 == 0xc) || param_2 == 0xd)) &&
          ((*(uint *)(param_1 + 0xf8) & 1) != 0)) {
    FUN_003735ac(&local_64,param_3,&local_58);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00357750(param_2,param_4 + 0x230,param_3);
  return;
}
