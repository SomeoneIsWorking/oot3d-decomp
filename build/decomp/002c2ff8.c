// OoT3D decomp @ 002c2ff8  name=FUN_002c2ff8  size=80

undefined4 * FUN_002c2ff8(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  *param_1 = DAT_002c3048;
  param_1[1] = 0;
  puVar3 = param_1 + 3;
  param_1[2] = 0;
  param_1[3] = 0;
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0xfffffffe;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_00310148(puVar3,uVar2);
  return param_1;
}
