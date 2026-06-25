// OoT3D decomp @ 00303ea8  name=FUN_00303ea8  size=20

undefined4 FUN_00303ea8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

