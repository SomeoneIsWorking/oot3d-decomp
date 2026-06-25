// OoT3D decomp @ 0048bd5c  name=FUN_0048bd5c  size=40

uint FUN_0048bd5c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int aiStack_8 [2];
  
  aiStack_8[0] = param_4;
  uVar1 = FUN_003043c0(param_1 + 0x14,aiStack_8,1);
  if (uVar1 != 0) {
    uVar1 = (uint)(aiStack_8[0] << 0x10) >> 0x18;
  }
  return uVar1;
}

