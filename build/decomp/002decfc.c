// OoT3D decomp @ 002decfc  name=FUN_002decfc  size=100

void FUN_002decfc(int param_1,int *param_2)

{
  int unaff_r5;

  if (*(char *)(param_1 + 0x100) == '\x03') {
    unaff_r5 = param_1 + 0x3190;
  }
  else if (*(char *)(param_1 + 0x100) == '\x05') {
    unaff_r5 = param_1 + 0x2e4;
  }
  FUN_00484e10(param_2 + 1);
  FUN_00484fec(unaff_r5 + 0xec);
  if (param_2[0x9f] != 0) {
    FUN_002f70c4(param_2 + 0x83);
  }
  if (*param_2 != 0) {
    FUN_0034fc6c();
  }
  *param_2 = 0;
  param_2[0x9f] = 0;
  return;
}
