// OoT3D decomp @ 001db20c  name=FUN_001db20c  size=636

void FUN_001db20c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  ushort uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_003510b0(param_1,DAT_001db5e4);
  *(undefined2 *)(param_1 + 0x644) =
       *(undefined2 *)(DAT_001db5e8 + (*(ushort *)(param_1 + 0x1c) & 3) * 2);
  uVar5 = *(ushort *)(param_1 + 0x1c) & 3;
  FUN_00353c9c(param_1,param_2,param_1 + 0x214,0x13,10,param_1 + 0x298,param_1 + 0x46c,9);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00350eb8(param_2,param_1 + 0x1a4);
  FUN_00350d48(param_2,param_1 + 0x1a4,param_1,DAT_001db5ec,param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0xb6) = 0x1e;
  if ((*(ushort *)(param_1 + 0x644) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x70) = DAT_001db5f0;
    *(undefined4 *)(param_1 + 0x74) = DAT_001db5f4;
  }
  fVar7 = DAT_001db618;
  uVar3 = DAT_001db610;
  uVar2 = DAT_001db60c;
  if ((*(ushort *)(param_1 + 0x644) & 4) != 0) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001db5f8 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001db5f8 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8((int)(short)(int)(DAT_001db604 + (DAT_001db5fc / fVar8) * DAT_001db608),
                 (int)(short)(int)(DAT_001db604 + (DAT_001db5fc / fVar7) * DAT_001db600));
  }
  if (uVar5 == 2 || uVar5 == 3) {
    bVar1 = false;
    psVar4 = *(short **)(DAT_001db614 + param_2);
    *(undefined4 *)(param_1 + 0x650) = 0;
    iVar6 = DAT_001db61c;
    for (; psVar4 != (short *)0x0; psVar4 = *(short **)(psVar4 + 0x98)) {
      if (((*psVar4 == iVar6) &&
          (fVar9 = *(float *)(param_1 + 0x28) - *(float *)(psVar4 + 0x14),
          fVar8 = *(float *)(param_1 + 0x30) - *(float *)(psVar4 + 0x18),
          fVar8 = fVar9 * fVar9 + fVar8 * fVar8, fVar8 < fVar7)) &&
         (*(char *)((int)psVar4 + 3) == *(char *)(param_1 + 3))) {
        bVar1 = true;
        *(short **)(param_1 + 0x650) = psVar4;
        fVar7 = fVar8;
      }
    }
    if (bVar1) {
      *(ushort *)(param_1 + 0x644) = *(ushort *)(param_1 + 0x644) | 0x18;
      *(undefined4 *)(param_2 + 0x7f54) = uVar3;
    }
    if (uVar5 == 2) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0;
      iVar6 = 0;
      do {
        z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x20,
                         (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                         (int)*(short *)(param_1 + 0xc0),3,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
    FUN_00375c08(uVar2,uVar3,uVar3,uVar3,param_1 + 0x214,10,1);
    *(undefined2 *)(param_1 + 0x64a) = 100;
    *(undefined4 *)(param_1 + 0x654) = DAT_001db620;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
