// OoT3D decomp @ 002cf63c  name=FUN_002cf63c  size=56

void FUN_002cf63c(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;

  uVar1 = *(undefined1 *)(param_1 + 0xe);
  uVar2 = *(undefined1 *)(param_1 + 0xf);
  uVar3 = *(undefined1 *)(param_1 + 0x10);
  param_2[0xc] = uVar1;
  param_2[8] = uVar1;
  param_2[0xd] = uVar2;
  param_2[9] = uVar2;
  param_2[0xe] = uVar3;
  param_2[10] = uVar3;
  *param_2 = 0;
  return;
}
