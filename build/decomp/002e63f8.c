// OoT3D decomp @ 002e63f8  name=FUN_002e63f8  size=80

void FUN_002e63f8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_c;
  undefined4 local_8;

  if (param_3 == 0) {
    local_c = DAT_002e644c;
    local_8 = DAT_002e6450;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    local_c = DAT_002e6448;
    local_8 = DAT_002e6448;
  }
  FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_c,1,param_2);
  return;
}
