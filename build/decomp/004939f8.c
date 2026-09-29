// OoT3D decomp @ 004939f8  name=FUN_004939f8  size=92

void FUN_004939f8(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;

  do {
    uVar2 = *(uint *)*param_1;
    if (0xe < (uVar2 & 0xff)) {
      uVar2 = 0;
    }
    bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
  } while (!bVar1);
  *(uint *)*param_1 = uVar2 & 0xff;
  *param_1 = 0;
  return;
}
