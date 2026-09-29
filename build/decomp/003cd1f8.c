// OoT3D decomp @ 003cd1f8  name=FUN_003cd1f8  size=120

void FUN_003cd1f8(int param_1)

{
  if (*(int *)(param_1 + 0x98) < DAT_003cd270) {
    FUN_00373500(DAT_003cd280,DAT_003cd27c,DAT_003cd278,param_1 + 0x6c);
    FUN_00375a18(param_1 + 0x36,(int)(short)(*(ushort *)(param_1 + 0x92) ^ 0x8000),10,1000,1);
  }
  else {
    *(undefined4 *)(param_1 + 0x5d4) = DAT_003cd274;
  }
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  return;
}
