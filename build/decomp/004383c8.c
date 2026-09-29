// OoT3D decomp @ 004383c8  name=FUN_004383c8  size=72

void FUN_004383c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = FUN_002ea050(param_1,param_2,param_3,0x144);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}
