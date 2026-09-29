// OoT3D decomp @ 0035bfb4  name=FUN_0035bfb4  size=60

void FUN_0035bfb4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;

  uVar1 = *(undefined1 *)(param_1 + 0xe);
  uVar2 = *(undefined1 *)(param_1 + 0xf);
  uVar3 = *(undefined1 *)(param_1 + 0x10);
  iVar4 = *(int *)(param_2 + 0xc);
  *(undefined1 **)(param_2 + 0xc) = (undefined1 *)(iVar4 + -0x80);
  *(undefined1 *)(iVar4 + -0x74) = uVar1;
  *(undefined1 *)(iVar4 + -0x78) = uVar1;
  *(undefined1 *)(iVar4 + -0x73) = uVar2;
  *(undefined1 *)(iVar4 + -0x77) = uVar2;
  *(undefined1 *)(iVar4 + -0x72) = uVar3;
  *(undefined1 *)(iVar4 + -0x76) = uVar3;
  *(undefined1 *)(iVar4 + -0x80) = 0;
  return;
}
