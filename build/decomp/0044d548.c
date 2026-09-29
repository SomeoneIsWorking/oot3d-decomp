// OoT3D decomp @ 0044d548  name=FUN_0044d548  size=156

undefined4 FUN_0044d548(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if ((*(int *)(param_1 + 0x20) != 0) &&
     (puVar1 = (undefined4 *)FUN_002df4c4(param_1 + 0x1c), puVar1 != (undefined4 *)0x0)) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    param_3[3] = puVar1[3];
    iVar3 = 0;
    do {
      uVar2 = FUN_002df4b0(param_1 + 0x1c,puVar1[iVar3 * 2 + 4]);
      iVar4 = iVar3 + 1;
      param_3[iVar3 * 2 + 4] = uVar2;
      param_3[iVar3 * 2 + 5] = puVar1[iVar3 * 2 + 5];
      iVar3 = iVar4;
    } while (iVar4 < 10);
    if (6 < (int)param_3[2]) {
      param_3[2] = 4;
    }
    return 1;
  }
  return 0;
}
