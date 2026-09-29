// OoT3D decomp @ 0044d968  name=FUN_0044d968  size=200

void FUN_0044d968(int param_1)

{
  bool bVar1;

  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x2c));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(int *)(param_1 + 0x38) = param_1 + 0x6c;
  *(undefined4 *)(param_1 + 0x58) = 0x20;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 100));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 100) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x68));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_002fb8e8(param_1 + 0x3c,0);
  FUN_002fb8e8(param_1 + 0x44,0);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x4c));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}
