// OoT3D decomp @ 0027a480  name=FUN_0027a480  size=572

void FUN_0027a480(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  FUN_003510b0(param_1,DAT_0027a6e4);
  *(char *)(param_1 + 0x1a4) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_00372f38(param_1,param_2,param_1 + 0x21c,2,0);
  TorchAnimationModel_00350508
            (param_1 + 0x220,param_2,0,
             *(undefined4 *)(DAT_0027a6e8 + (uint)*(byte *)(param_1 + 0x1a4) * 4));
  uVar1 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  FUN_0036f410(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_0027a6ec,
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x1ac,0,0,0,0,0);
  FUN_00353dd0(param_2,param_1 + 0x1c4);
  FUN_00353d24(param_2,param_1 + 0x1c4,param_1,DAT_0027a6f0);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x30);
  if ((((*(char *)(param_1 + 0x1a4) == '\0') && (iVar2 = FUN_0036e864(param_2,0x1f), iVar2 != 0)) &&
      (iVar2 = FUN_0036e864(param_2,0x1e), iVar2 != 0)) &&
     ((iVar2 = FUN_0036e864(param_2,0x1d), iVar2 != 0 &&
      (iVar2 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c)), iVar2 == 0)))) {
    z_actor_003738d0(DAT_0027a6fc,DAT_0027a6f8,DAT_0027a6f4,param_2 + 0x208c,param_2,0x91,0,0,0,
                     (int)*(short *)(param_1 + 0x1c),1);
    *(undefined1 *)(param_2 + 0x3237) = 4;
  }
  else {
    iVar2 = FUN_0036e864(param_2,0x1c);
    if ((iVar2 == 0) && (iVar2 = FUN_0036e864(param_2,0x1b), iVar2 == 0)) {
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_0027a700,
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x91,0,0,0,
                       (int)(short)((ushort)*(byte *)(param_1 + 0x1a4) * 0x100 + 0x1000 +
                                   *(short *)(param_1 + 0x1c)),1);
    }
    else {
      uVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
      bVar4 = uVar3 == 0;
      if (bVar4) {
        uVar3 = (uint)*(byte *)(param_2 + 0x3237);
      }
      if (bVar4 && uVar3 == 0xff) {
        *(undefined1 *)(param_2 + 0x3237) = 4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
