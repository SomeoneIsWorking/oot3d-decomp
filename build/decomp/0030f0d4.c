// OoT3D decomp @ 0030f0d4  name=FUN_0030f0d4  size=24

void FUN_0030f0d4(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x90) = param_2;
  iVar2 = param_2;
  if (param_2 < 1) {
    iVar2 = 0;
  }
  uVar1 = (undefined)iVar2;
  if (0 < param_2) {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0x87) = uVar1;
  return;
}

