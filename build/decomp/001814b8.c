// OoT3D decomp @ 001814b8  name=FUN_001814b8  size=72

void FUN_001814b8(int param_1)

{
  int iVar1;

  FUN_003660fc(DAT_00181500,param_1 + 0x1bc,0);
  iVar1 = DAT_00181508;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00181504;
  *(undefined2 *)(iVar1 + param_1) = 3;
  *(undefined4 *)(param_1 + 0x448) = 10;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0x44c) = DAT_0018150c;
  return;
}
