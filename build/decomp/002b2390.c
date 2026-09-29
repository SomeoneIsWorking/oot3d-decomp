// OoT3D decomp @ 002b2390  name=FUN_002b2390  size=180

void FUN_002b2390(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_002b2448,DAT_002b2444,DAT_002b2444,param_2,param_1,4);
  FUN_00330370(param_1);
  iVar1 = FUN_0037571c(param_2);
  psVar2 = (short *)0x0;
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22ec);
  }
  if ((iVar1 != 0 && psVar2 != (short *)0x0) && (*psVar2 == 8)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,5);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_002b2450,uVar3,uVar3,DAT_002b244c,param_1 + 0x1a4,5,0);
    *(undefined4 *)(param_1 + 3000) = 10;
  }
  if (*(int *)(param_1 + 3000) != 0x22) {
    *(undefined4 *)(param_1 + 3000) = 0x23;
  }
  return;
}
