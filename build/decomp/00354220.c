// OoT3D decomp @ 00354220  name=FUN_00354220  size=40

uint FUN_00354220(int param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_18 [8];
  int iStack_10;
  int iStack_c;
  
  iStack_10 = param_1;
  iStack_c = param_2;
  uVar1 = func_0x003521f0(*(undefined4 *)(param_1 + param_2 * 4 + 0xa54),0x20,auStack_18);
  return uVar1 & 1;
}

