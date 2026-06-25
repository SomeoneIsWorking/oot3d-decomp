// OoT3D decomp @ 0048bdd0  name=FUN_0048bdd0  size=40

uint FUN_0048bdd0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint auStack_8 [2];
  
  auStack_8[0] = param_4;
  iVar1 = FUN_003043c0(param_1 + 0x14,auStack_8,2);
  if (iVar1 == 0) {
    auStack_8[0] = 0x40;
  }
  else {
    auStack_8[0] = auStack_8[0] & 0xff;
  }
  return auStack_8[0];
}

