// OoT3D decomp @ 002c3c7c  name=FUN_002c3c7c  size=128

void FUN_002c3c7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_003518cc();
  FUN_0036055c(param_2,param_1);
  uVar1 = DAT_002c3d10;
  if (*(int *)(param_1 + 0x284) !=
      *(int *)(DAT_002c3d0c + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x30)) {
    *(undefined4 *)(param_1 + 0x2254) = DAT_002c3d10;
    *(undefined4 *)(param_1 + 0x2250) = uVar1;
  }
  *(undefined2 *)(DAT_002c3d14 + param_1) = 0;
  return;
}

