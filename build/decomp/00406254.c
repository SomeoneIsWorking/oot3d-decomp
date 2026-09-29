// OoT3D decomp @ 00406254  name=FUN_00406254  size=124

undefined4 * FUN_00406254(undefined4 *param_1)

{
  int iVar1;

  *param_1 = DAT_004062d0;
  FUN_0030a0e8(param_1);
  for (iVar1 = param_1[0x31]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    if (*(char *)(iVar1 + 0xc6) != '\0') {
      FUN_0030a030(iVar1);
    }
  }
  for (iVar1 = param_1[0x31]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    FUN_0030a3f8(iVar1);
  }
  param_1[0x31] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  return param_1;
}
