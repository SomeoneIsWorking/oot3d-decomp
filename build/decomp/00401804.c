// OoT3D decomp @ 00401804  name=FUN_00401804  size=92

void FUN_00401804(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;

  *param_1 = param_2;
  do {
    uVar2 = *(uint *)*param_1;
    if (0xe < (uVar2 & 0xff)) {
      uVar2 = 0;
    }
    bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
  } while (!bVar1);
  *(uint *)*param_1 = uVar2 & 0xff;
  return;
}
