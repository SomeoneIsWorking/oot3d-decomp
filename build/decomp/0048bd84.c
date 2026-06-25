// OoT3D decomp @ 0048bd84  name=FUN_0048bd84  size=36

uint FUN_0048bd84(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint auStack_8 [2];
  
  auStack_8[0] = param_4;
  uVar1 = FUN_003043c0(param_1 + 0x14,auStack_8,0x11);
  if (uVar1 != 0) {
    uVar1 = auStack_8[0] & 1;
  }
  return uVar1;
}

