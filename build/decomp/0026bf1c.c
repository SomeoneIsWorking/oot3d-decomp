// OoT3D decomp @ 0026bf1c  name=FUN_0026bf1c  size=160

void FUN_0026bf1c(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0026bfc0,DAT_0026bfbc,DAT_0026bfbc,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_0032cd68(param_1,param_2);
  iVar1 = FUN_0037571c(param_2);
  psVar2 = (short *)0x0;
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22ec);
  }
  if ((iVar1 != 0 && psVar2 != (short *)0x0) && (*psVar2 == 9)) {
    if (*(short *)(param_2 + 0x104) != 0x61) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(undefined4 *)(param_1 + 3000) = 0x13;
    *(undefined4 *)(param_1 + 0xbbc) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}
