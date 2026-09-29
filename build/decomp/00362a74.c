// OoT3D decomp @ 00362a74  name=FUN_00362a74  size=52

void FUN_00362a74(int param_1)

{
  undefined4 uVar1;

  FUN_0037572c(DAT_00362aa8);
  *(undefined2 *)(param_1 + 0xbc) = 0xc000;
  uVar1 = DAT_00362ab0;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_00362aac;
  *(undefined4 *)(param_1 + 0x228) = uVar1;
  return;
}
