// OoT3D decomp @ 0020c130  name=FUN_0020c130  size=104

undefined4 FUN_0020c130(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xf9;
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (uVar1 < uVar1 + *(int *)(param_2 + 0x18) * 0x50) {
    do {
      *(byte *)(uVar1 + 0x15) = *(byte *)(uVar1 + 0x15) & 0xbd;
      *(undefined4 *)(uVar1 + 0x18) = 0;
      *(undefined4 *)(uVar1 + 0x20) = 0;
      uVar1 = uVar1 + 0x50;
    } while (uVar1 < (uint)(*(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x18) * 0x50));
  }
  return 1;
}

