// OoT3D decomp @ 00154ba8  name=FUN_00154ba8  size=92

void FUN_00154ba8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1a8));
  uVar2 = DAT_00154c08;
  uVar1 = DAT_00154c04;
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x140) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0x1aa) = 0x2d;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00154c0c;
  }
  return;
}
