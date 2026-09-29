// OoT3D decomp @ 004c11a0  name=FUN_004c11a0  size=76

void FUN_004c11a0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;

  uVar4 = DAT_004c11ec;
  uVar3 = *(undefined2 *)(param_2 + 0x2238);
  uVar1 = *(undefined1 *)(param_2 + 0x2237);
  uVar2 = *(undefined1 *)(param_2 + 0x2a6);
  *(undefined1 *)(param_2 + 0x2a6) = 0;
  FUN_0036055c(param_1,param_2,uVar4,0);
  uVar4 = DAT_004c11f0;
  *(undefined1 *)(param_2 + 0x2a6) = uVar2;
  *(undefined4 *)(param_2 + 100) = uVar4;
  *(undefined2 *)(param_2 + 0x2238) = uVar3;
  *(undefined1 *)(param_2 + 0x2237) = uVar1;
  *(undefined1 *)(param_2 + 0x227f) = 0;
  return;
}
