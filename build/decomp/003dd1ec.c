// OoT3D decomp @ 003dd1ec  name=FUN_003dd1ec  size=140

void FUN_003dd1ec(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x204);
  if (iVar1 != 0) {
    iVar1 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,DAT_003dd278,
                             (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                             (int)*(short *)(param_1 + 0xc0),(int)*(short *)(param_1 + 0x1c),1);
    *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_1 + 3);
    FUN_00374428(param_1);
    return;
  }
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_003dd27c);
  return;
}
