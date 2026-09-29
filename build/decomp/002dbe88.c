// OoT3D decomp @ 002dbe88  name=FUN_002dbe88  size=364

uint FUN_002dbe88(code *param_1,int param_2,code *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  int iVar5;
  bool bVar6;

  software_interrupt(0x28);
  while( true ) {
    FUN_0030db4c();
    FUN_0030dab0();
    uVar2 = (*param_1)();
    FUN_0030da40();
    uVar3 = *DAT_002dbff4;
    software_interrupt(0x14);
    uVar4 = uVar3 >> 0x1b;
    if ((uVar3 & 0x80000000) != 0) {
      uVar4 = uVar4 - 0x20;
    }
    if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
      FUN_003351b4(uVar3);
      uVar3 = extraout_r1;
    }
    if ((-1 < (int)uVar2) || (param_4 == DAT_002dbff8[1] && param_3 == (code *)*DAT_002dbff8)) {
      return uVar2;
    }
    if (param_4 != DAT_002dbffc[1] || param_3 != (code *)*DAT_002dbffc) {
      software_interrupt(0x28);
      uVar3 = uVar3 - (param_2 + (uint)(param_3 < param_1));
      lVar1 = (ulonglong)(uint)((int)param_3 - (int)param_1) * 3 +
              CONCAT44(((int)uVar3 >> 0x1f) * DAT_002dc000 +
                       (int)((ulonglong)DAT_002dc000 * (ulonglong)uVar3 >> 0x20),
                       (int)((ulonglong)DAT_002dc000 * (ulonglong)uVar3)) +
              CONCAT44(uVar3 * 3,
                       (int)((ulonglong)DAT_002dc000 *
                             (ulonglong)(uint)((int)param_3 - (int)param_1) >> 0x20));
      iVar5 = (int)((ulonglong)lVar1 >> 0x20);
      bVar6 = param_3 < (code *)lVar1;
      if ((int)(param_4 - (iVar5 + (uint)bVar6)) < 0 !=
          (SBORROW4(param_4,iVar5) != SBORROW4(param_4 - iVar5,(uint)bVar6))) {
        return uVar2;
      }
    }
    uVar4 = uVar2 & 0x3ff;
    if ((uVar4 != 0x3f0 && uVar4 != 8) && uVar4 != 2) break;
    FUN_0030e604(*(undefined4 *)(DAT_002dc004 + 0xe0),*(undefined4 *)(DAT_002dc004 + 0xe4));
  }
  return uVar2;
}
