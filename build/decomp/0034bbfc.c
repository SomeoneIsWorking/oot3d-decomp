// OoT3D decomp @ 0034bbfc  name=FUN_0034bbfc  size=56

void FUN_0034bbfc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0034bc34;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xfffdffff;
  if (*(char *)(iVar1 + param_1) != '\0') {
    *(undefined *)(param_1 + 0x2227) = 0;
  }
  *(undefined4 *)(param_1 + 0x230c) = 0;
  *(undefined4 *)(param_1 + 0x22d8) = 0;
  *(undefined4 *)(param_1 + 0x22a4) = 0;
  return;
}

