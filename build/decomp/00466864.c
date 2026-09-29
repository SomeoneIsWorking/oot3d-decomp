// OoT3D decomp @ 00466864  name=FUN_00466864  size=148

void FUN_00466864(int param_1)

{
  int iVar1;

  *(undefined1 *)(param_1 + 0x28) = 0;
  do {
    iVar1 = FUN_002d33cc(param_1,2,0);
    if ((((iVar1 != 0) || (iVar1 = FUN_002d33cc(param_1,1,0), iVar1 != 0)) ||
        (iVar1 = FUN_002d33cc(param_1,0), iVar1 != 0)) && (iVar1 != 0)) {
      return;
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      return;
    }
    iVar1 = FUN_002fc114(param_1 + 0x38);
  } while (iVar1 != 0);
  return;
}
