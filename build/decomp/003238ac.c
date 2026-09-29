// OoT3D decomp @ 003238ac  name=FUN_003238ac  size=228

void FUN_003238ac(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  uint in_fpscr;

  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_00323994,DAT_00323990,DAT_00323990,param_2,param_1,4);
  FUN_00330370(param_1);
  if (iVar2 != 0) {
    uVar4 = 6;
    psVar5 = (short *)0x0;
    iVar2 = FUN_0037571c(param_2);
    if (iVar2 != 0) {
      psVar5 = *(short **)(param_2 + 0x22ec);
    }
    if (psVar5 != (short *)0x0) {
      sVar1 = *psVar5;
      if (sVar1 == 0xb) {
        uVar4 = 8;
      }
      else if (sVar1 == 0xc) {
        uVar4 = 9;
      }
      else if (sVar1 == 0xd) {
        uVar4 = 7;
      }
      else if (sVar1 == 0x17) {
        uVar4 = 10;
      }
    }
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,uVar4);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003239a0,DAT_0032399c,uVar3,DAT_00323998,param_1 + 0x1a4,uVar4,0);
    *(undefined4 *)(param_1 + 3000) = 9;
    *(undefined4 *)(param_1 + 0xbbc) = 3;
  }
  return;
}
