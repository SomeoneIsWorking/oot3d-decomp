// OoT3D decomp @ 004547bc  name=FUN_004547bc  size=156

void FUN_004547bc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar1 = (undefined4 *)FUN_002dbc48(*param_1,param_3 + 8);
  if ((puVar1[1] & 0xffff) == 0x2c1) {
    *puVar1 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[1];
    puVar1[4] = *param_2;
    iVar3 = 3;
    puVar2 = param_2 + 7;
    puVar1 = puVar1 + 5;
    do {
      *puVar1 = *puVar2;
      iVar3 = iVar3 + -1;
      puVar1[1] = puVar2[-1];
      puVar1[2] = puVar2[-2];
      puVar1[3] = puVar2[-3];
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
    } while (iVar3 != 0);
  }
  return;
}
