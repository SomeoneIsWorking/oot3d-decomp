// OoT3D decomp @ 00481a68  name=FUN_00481a68  size=64

undefined4 FUN_00481a68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_003042d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  iVar1 = FUN_003043c0(iVar1 + 0x14,&stack0xfffffff8,0x1f);
  if (iVar1 == 0) {
    param_4 = 0xffffffff;
  }
  return param_4;
}

