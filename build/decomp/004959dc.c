// OoT3D decomp @ 004959dc  name=FUN_004959dc  size=72

void FUN_004959dc(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar3 = DAT_00495a2c;
  puVar2 = DAT_00495a28;
  *DAT_00495a28 = param_1;
  puVar2[1] = param_2;
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  return;
}
