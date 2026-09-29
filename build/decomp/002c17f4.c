// OoT3D decomp @ 002c17f4  name=FUN_002c17f4  size=140

undefined4 * FUN_002c17f4(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;

  puVar3 = param_1 + 1;
  *param_1 = DAT_002c1880;
  *puVar3 = 0;
  do {
    uVar4 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0xfffffffe;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  uVar2 = DAT_002c1884;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  uVar2 = DAT_002c1888;
  param_1[5] = DAT_002c1888;
  param_1[6] = uVar2;
  param_1[7] = uVar2;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = uVar2;
  param_1[10] = uVar2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  FUN_00310148(puVar3,uVar4);
  return param_1;
}
