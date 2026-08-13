// OoT3D decomp @ 001ec7e4  name=FUN_001ec7e4  size=72

void FUN_001ec7e4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x880) != iRam001ec82c) {
    func_0x003b4308(param_2,param_1);
  }
  func_0x0014690c(*(undefined4 *)(param_1 + 0x87c),param_1 + 0x2924,param_2);
  *(undefined4 *)(param_1 + 0x87c) = uRam001ec830;
  return;
}
