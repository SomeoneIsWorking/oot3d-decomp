// OoT3D decomp @ 0034c2e8  name=FUN_0034c2e8  size=188

void FUN_0034c2e8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  *(undefined4 *)(param_1 + 0x13c) = DAT_0034c3a4;
  FUN_00375d3c(param_2,param_2 + 0x208c,param_1,5);
  *(undefined2 *)(param_1 + 0xbc) = 0;
  FUN_0036e140(param_1 + 0x920,0,0,0,0,0);
  uVar1 = DAT_0034c3ac;
  *(undefined2 *)(DAT_0034c3a8 + param_1) = 300;
  FUN_0037572c(uVar1,param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffefffe;
  *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) & 0xfe;
  *(undefined1 *)(param_1 + 0x94a) = 0x39;
  *(undefined1 *)(param_1 + 0xb7) = *DAT_0034c3b0;
  uVar2 = DAT_0034c3b4;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x8f4) = uVar2;
  return;
}
