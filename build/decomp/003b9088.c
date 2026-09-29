// OoT3D decomp @ 003b9088  name=FUN_003b9088  size=84

void FUN_003b9088(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_003b91a4;
  FUN_0036e168(DAT_003b91a4,DAT_003b91a8,DAT_003b91a4,DAT_003b91a0,param_1 + 0x1e4);
  iVar2 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),uVar1,param_1 + 0x1a4);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0x3c,0x5a);
  }
  return;
}
