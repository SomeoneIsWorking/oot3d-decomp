// OoT3D decomp @ 00111140  name=FUN_00111140  size=92

void FUN_00111140(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00371e40();
  uVar1 = DAT_0011119c;
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined1 *)(param_1 + 3) = 0xff;
    uVar1 = DAT_001111a0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    FUN_00375c44(param_2,param_1 + 0x28,0x14,uVar1);
    return;
  }
  return;
}
