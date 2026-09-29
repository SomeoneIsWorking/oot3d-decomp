// OoT3D decomp @ 0027dd38  name=FUN_0027dd38  size=192

void FUN_0027dd38(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  bool bVar3;
  uint in_fpscr;
  undefined8 uVar4;

  uVar4 = FUN_0037571c(param_2);
  psVar2 = (short *)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  if (bVar3) {
    psVar2 = *(short **)(param_2 + 0x22f0);
  }
  if ((bVar3 && psVar2 != (short *)0x0) && (*psVar2 == 2)) {
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_0027ddfc,DAT_0027ddf8,uVar1,DAT_0027ddf8,param_1 + 0x1a4,DAT_0027de00,0);
    *(undefined4 *)(param_1 + 0xbb4) = 2;
    *(undefined4 *)(param_1 + 3000) = 1;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x5d,0,0,0,2);
  }
  return;
}
