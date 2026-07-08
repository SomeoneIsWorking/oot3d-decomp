// OoT3D decomp @ 003664d4  name=FUN_003664d4  size=64

void FUN_003664d4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x9a8) = 5;
  *(undefined2 *)(param_1 + 0xb74) = 0x1e;
  uVar1 = uRam00366514;
  *(undefined2 *)(param_1 + 0xb76) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined2 *)(param_1 + 0xb78) = 1000;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x9ac) = uRam00366518;
  return;
}

