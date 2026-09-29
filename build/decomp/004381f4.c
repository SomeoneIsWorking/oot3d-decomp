// OoT3D decomp @ 004381f4  name=FUN_004381f4  size=44

void FUN_004381f4(int param_1)

{
  bool bVar1;

  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x1b8));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return;
}
