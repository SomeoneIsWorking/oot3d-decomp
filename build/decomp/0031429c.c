// OoT3D decomp @ 0031429c  name=FUN_0031429c  size=60

void FUN_0031429c(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;

  uVar1 = DAT_003142d8;
  puVar2 = *(undefined4 **)(*param_1 + 8);
  *puVar2 = 1;
  puVar2[2] = 1;
  puVar2[1] = uVar1;
  puVar2[3] = uVar1 & 0xfffffffe;
  *(undefined4 **)(*param_1 + 8) = puVar2 + 4;
  return;
}
