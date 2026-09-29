// OoT3D decomp @ 003a2800  name=FUN_003a2800  size=224

void FUN_003a2800(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_003a28e4,DAT_003a28e0,DAT_003a28e0,param_2,param_1,4);
  FUN_00319564(param_1,param_2);
  FUN_003239a4(param_1,param_2,4);
  psVar4 = (short *)0x0;
  iVar2 = FUN_0037571c(param_2);
  uVar1 = DAT_003a28e8;
  if (iVar2 != 0) {
    psVar4 = *(short **)(param_2 + 0x22ec);
  }
  if ((psVar4 != (short *)0x0) && (*psVar4 == 0x16)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0x13);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003a28ec,uVar1,uVar3,uVar1,param_1 + 0x1a4,0x13,0);
    *(undefined4 *)(param_1 + 3000) = 0x33;
    FUN_003239a4(param_1,param_2,4);
    return;
  }
  return;
}
