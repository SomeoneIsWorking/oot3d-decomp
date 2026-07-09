// OoT3D decomp @ 00366684  name=FUN_00366684  size=24

undefined4 FUN_00366684(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(iRam0036669c + param_1 * 4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x9c);
  }
  return uVar2;
}

