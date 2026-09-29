// OoT3D decomp @ 00456294  name=FUN_00456294  size=48

void FUN_00456294(int param_1)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 8) != '\0' && *(char *)(param_1 + 8) != '\x06') {
    FUN_002fbb20(param_1);
  }
  uVar1 = DAT_004562c4;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}
